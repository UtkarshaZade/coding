#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cstdlib>

using namespace std;
string encrypt(const string& input, char key) {
    string output = input;
    for (size_t i = 0; i < input.size(); i++) {
        output[i] = input[i] ^ key;
    }
    return output;
}


void add(const string& filename, char key) {
    string accname, user, password;
    
    cout << "Enter account name (e.g., email, social media, banking): ";
    getline(cin, accname);
    
    cout << "Enter username: ";
    getline(cin, user);
    
    cout << "Enter password: ";
    getline(cin, password);
    
    string encryptedPassword = encrypt(password, key);
    
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << accname << "," << user << "," << encryptedPassword << endl;
        file.close();
        cout << "Password added successfully.\n";
    } else {
        cerr << "Unable to open file for writing.\n";
    }
}


void viewPasswords(const string& filename, char key, const string& masterPassword) {
    string enter;
    cout << "Enter master password to view saved passwords: ";
    cin >> enter;
    
    if (enter != masterPassword) {
        cout << "Incorrect master password.\n";
        return;
    }

    ifstream file(filename);
    string line;
    
    if (file.is_open()) {
        cout << "Stored passwords:\n";
        while (getline(file, line)) {
            stringstream ss(line);
            string accname, user, encryptedPassword;
            
            getline(ss, accname, ',');
            getline(ss, user, ',');
            getline(ss, encryptedPassword, ',');
            
            cout << "Account: " << accname << " | Username: " << user << " | Password: [Hidden]" << endl;
            cout << "Would you like to reveal this password? (yes/no): ";
            string choice;
            cin >> choice;
            
            if (choice == "yes") {
                cout << "Re-enter master password to reveal: ";
                cin >> enter;
                if (enter == masterPassword) {
                    string decryptedPassword = encrypt(encryptedPassword, key);
                    cout << "Password: " << decryptedPassword << endl;
                } else {
                    cout << "Incorrect master password. Unable to reveal password.\n";
                }
            }
            
        }
        file.close();
    } else {
        cerr << "Unable to open file for reading.\n";
    }
}

// Delete a password entry by account name
void deletePassword(const string& filename, const string& Delete) {
    ifstream file(filename);
    ofstream tempFile("temp.csv");
    string line;
    bool found = false;

    if (file.is_open() && tempFile.is_open()) {
        while (getline(file, line)) {
            stringstream ss(line);
            string accname, user, encryptedPassword;
            
            getline(ss, accname, ',');
            getline(ss, user, ',');
            getline(ss, encryptedPassword, ',');
            
            if (accname != Delete) {
                tempFile << accname << "," << user << "," << encryptedPassword << endl;
            } else {
                found = true;
            }
        }
        file.close();
        tempFile.close();
        
        remove(filename.c_str());
        rename("temp.csv", filename.c_str());

        if (found) {
            cout << "Password for account '" << Delete << "' deleted successfully.\n";
        } else {
            cout << "Account not found.\n";
        }
    } else {
        cout << "Error accessing files.\n";
    }
}


void updatePassword(const string& filename, char key) {
    string update;
    cout << "Enter account name to update the password: ";
    getline(cin, update);

    ifstream file(filename);
    ofstream tempFile("temp.csv");
    string line;
    bool found = false;

    if (file.is_open() && tempFile.is_open()) {
        while (getline(file, line)) {
            stringstream ss(line);
            string accname, user, encryptedPassword;
            
            getline(ss, accname, ',');
            getline(ss, user, ',');
            getline(ss, encryptedPassword, ',');
            
            if (accname == update) {
                found = true;
                string newPassword;
                cout << "Enter new password for account '" << update << "': ";
                getline(cin, newPassword);

                string encryptedNewPassword = encrypt(newPassword, key);
                tempFile << accname << "," << user << "," << encryptedNewPassword << endl;
                cout << "Password updated successfully.\n";
            } else {
                tempFile << accname << "," << user << "," << encryptedPassword << endl;
            }
        }
        file.close();
        tempFile.close();
        
        remove(filename.c_str());
        rename("temp.csv", filename.c_str());

        if (!found) {
            cout << "Account not found.\n";
        }
    } else {
        cout << "Error accessing files.\n";
    }
}


string generate(int length) {
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";
    string password;
    srand(time(0));
    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.size()];
    }
    return password;
}

int main() {
    const string filename = "passwords.csv";
    char key = 't';  
    string masterPassword = "pass@#";  
    int choice;

    do {
        // Display menu
        cout << "\nPassword Manager Menu:\n";
        cout << "1. Add New Password\n";
        cout << "2. View Saved Passwords\n";
        cout << "3. Delete a Password\n";
        cout << "4. Generate Strong Password\n";
        cout << "5. Update a Password\n";  // New update password option
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add(filename, key);
                break;
            case 2:
                viewPasswords(filename, key, masterPassword);
                break;
            case 3: {
                string Delete;
                cout << "Enter account name to delete: ";
                cin.ignore();
                getline(cin, Delete);
                deletePassword(filename, Delete);
                break;
            }
            case 4: {
                int length;
                cout << "Enter desired password length: ";
                cin >> length;
                cout << "Generated Password: " << generate(length) << endl;
                break;
            }
            case 5:  
                updatePassword(filename, key);
                break;
            case 6:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }
    } while (choice != 6);

    return 0;
}
