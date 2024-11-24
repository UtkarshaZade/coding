//exam code
#include<iostream>
using namespace std;

class exam
{
    public:
    int count=0;
    float marks;
    string name,exam;
    char q1,q2,q3,q4,q5,q6,q7,q8,q9,q0;
    char c1,c2,c3,c4,c5,c6,c7,c8,c9,c0;
    char g1,g2,g3,g4,g5,g6,g7,g8,g9,g0;
    void cal();
    void display();
    void input();
    void c();
    void cpp();
    void gk();
};

void exam::input()
{
    cout<<"Please Enter your name : ";
    cin>>name;
    cout<<"\n---------------------------------------------------------------------------------------\n";
    cout<<"** HELLO, "<<name<<" **\n";
    cout<<"Some Rules Of The Exam Are : \n1.This is a multiple choice questions test.\n2.You can select only one option from given options.\n";
    cout<<"3.Write the selected option in small letters and not capital.\n4.Test consist of 10 questions and each queastion carries 1 mark.\n";
    cout<<"5.Test is of 10 marks\n6.In the codes '' means double quote and ' mean single qoute\n\n";
    cout<<"Note : You can give only one exam.\n";
    cout<<"Note : Please write cpp for c++ test.\n\n";
    cout<<"Please enter which test you would like to give ?\n";
    cin>>exam;
    cout<<endl;
    cout<<"\n---------------------------------------------------------------------------------------\n";
    cout<<"WELCOME TO THE "<<exam<<" TEST!!\n";
    cout<<"*****   ALL TH BEST FOR THE TEST !!   *****\n";
    cout<<"---------------------------------------------------------------------------------------\n\n";

}
void exam::cal()
{
    if(exam=="c" || exam=="C")
    {
    if(c1=='c')
    count++;
    if(c2=='b')
    count++;
    if(c3=='d')
    count++;
    if(c4=='d')
    count++;
    if(c5=='b')
    count++;
    if(c6=='a')
    count++;
    if(c7=='a')
    count++;
    if(c8=='b')
    count++;
    if(c9=='c')
    count++;
    if(c0=='a')
    count++;
    
    }

    else
    if(exam=="cpp" || exam=="CPP" || exam=="Cpp")
    {
        if(q1=='a')
        count++;
        if(q2=='a')
        count++;
        if(q3=='b')
        count++;
        if(q4=='a')
        count++;
        if(q5=='a')
        count++;
        if(q6=='a')
        count++;
        if(q7=='b')
        count++;
        if(q8=='d')
        count++;
        if(q0=='b')
        count++;
        if(q9=='c')
        count++;
    }
    else
    if (exam=="gk" || exam=="GK" || exam=="Gk")
    {
        if(g1=='d')
        count++;
        if(g2=='b')
        count++;
        if(g3=='c')
        count++;
        if(g4=='d')
        count++;
        if(g5=='a')
        count++;
        if(g6=='a')
        count++;
        if(g7=='b')
        count++;
        if(g8=='a')
        count++;
        if(g9=='a')
        count++;
        if(g0=='d')
        count++;
    }
    
}
void exam::display()
{
    if (count==10)
    cout<<"**** CONGRATULATIONS ****\n YOU GOT A PERFECT SCORE!!!!\n KEEP PRACTICING LIKE THIS\n ALL THE EBST!!!";
    if (count==9)
    cout<<"**** CONGRATULATIONS ****\n WELL DONE!! JUST ONE POINT MORE FOR A PERFECT SCORE!\n KEEP PRACTICING LIKE THIS\n ALL THE EBST!!!";
    else 
    if (count==8)
    cout<<"**** CONGRATULATIONS ****\n You Got 8 OUT OF 10\n KEEP PRACTICING LIKE THIS\n ALL THE EBST!!!";
    else 
    if(count==7)
    cout<<"**** CONGRATULATIONS ****\n You Got 7 OUT OF 10\n NEED A LITTLE MORE PRACTICING\n ALL THE EBST!!!";
    else 
    if(count==6)
    cout<<"WELL DONE!!\n You Got 6 OUT OF 10\n NEED A LITTLE MORE PRACTICING\n ALL THE EBST!!!";
    else
    if(count==5)
    cout<<"WELL DONE!!\n You Got 5 OUT OF 10\n NEED A LITTLE MORE PRACTICING\n ALL THE EBST!!!";
    if(count==4)
    cout<<" You Got 4 OUT OF 10\n NEED MORE PRACTICING\n ALL THE EBST!!!";
    else
    if(count==3)
    cout<<" You Got 3 OUT OF 10\n NEED MORE PRACTICING\n ALL THE EBST!!!";
    else
    if(count==2)
    cout<<" You Got 2 OUT OF 10\n NEED MORE PRACTICING\n ALL THE EBST!!!";
    else
    if(count==1)
    cout<<" You Got 1 OUT OF 10\n NEED MORE PRACTICING\n ALL THE EBST!!!";
    else 
    if(count==0)
    cout<<" You Got 0 OUT OF 10\n NEED MORE PRACTICING\n ALL THE EBST!!!";

}
void exam::c()
{
cout<<"1.In C, if you pass an array as an argument to a function, what actually gets passed?\n   a. Value of elements in array\n";
cout<<"   b. First element of the array\n   c. Base address of the array\n   d. Address of the last element of array\n\n";
cout<<"Your Answer - ";
cin>>c1;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"2.When a variable is created in C, a memory address is assigned to the variable.\n   a. False\n   b. True\n\n";
cout<<"Your Answer - ";
cin>>c2;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"3.Which format specifier is often used to print characters?\n   a. %d \n   b. %s\n   c. %f\n   d. %c";
cout<<"Your Answer - ";
cin>>c3;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"4.What is the output of the following program?\n         #include<stdio.h>\n         void main()\n";
cout<<"       {\n        char s[] =''C++'';\n        printf(''%s '',s);\n        s++;\n        printf(''%s'',s);\n        }\n";
cout<<"   a. C++ C++\n   b. C++ ++\n   c. ++ ++\n   d. Compile error\n\n";
cout<<"Your Answer - ";
cin>>c4;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"5.What is the output of the following program?\n        #include<stdio.h>\n        main ()\n        {\n        printf();\n        }\n";
cout<<"   a. Program compiles as printf is designed to receive variable number of arguments.\n   b. Program fails compilation\n";
cout<<"   c. printf is not a built in library function\n   d. Semicolon need to be removed while calling printf with no parameters.\n\n";
cout<<"Your Answer - ";
cin>>c5;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"6.An exception is __\n   a. Runtime error\n   b. Compile time error   c. Logical error\n   d. None of the above\n\n";
cout<<"Your Answer - ";
cin>>c6;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"7.Which statement can print \n on the screen?\n   a. printf(''\\n'');\n   b. printf(''n\'');\n   c. printf(''n'');\n";
cout<<"   d. printf('\n');";
cout<<"Your Answer - ";
cin>>c7;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"8.What is the output of the following program?\n         #include<stdio.h>\n         void f()\n      {\n";
cout<<"        static int i = 3;\n         printf(''%d '', i);\n        if(--i) f();\n        }\n";
cout<<"        main()\n        {\n        f();\n       }";
cout<<"   a. 3 2 1 0\n   b. 3 2 1   c. 3 3 3\n   d. Compile error\n\n";
cout<<"Your Answer - ";
cin>>c8;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"9.How many times the given below program will print ''India''?\n     #include<stdio.h>\n     int main ()\n    {\n";
cout<<"    int x;\n    for(x=-1; x<=20; x++)int i;\n    {\n    if(x < 10)\n      continue;\n    else\n      break;\n      printf(''India'')\n";
cout<<"    }\na. Unlimited times\nb. 21 times\nc. 0 timesd. 20 times";
cout<<"Your Answer - ";
cin>>c9;
cout<<"---------------------------------------------------------------------------------------\n\n";
cout<<"10.What is the output of the following program?\n    #include<stdio.h>\n    main ()\n    {\n    int a=1, b=2, *p=&a, *q=&b, *r=p\n";
cout<<"    p = q; q = r;\n    printf(''%d %d %d %d\n'',a,b,*p,*q);\n    }\na. 1 2 2 1\nb. 2 1 2 1\nc. 1 2 1 2\nd. Compile error\n";
cout<<"Your Answer - ";
cin>>c0;
cout<<"---------------------------------------------------------------------------------------\n";
cout<<"---------------------------------------------------------------------------------------\n\n";
    
}
void exam::cpp()
{
    cout<<"1.Which data type is used to create a variable that should store text? \n   a.string\n   b.myString\n   c.String\n   d.Txt\n\n";
    cout<<"Your Answer - ";
    cin>>q1;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"2.How do you create a variable with the floating number 2.8? \n   a.double x = 2.8;\n   b.byte x = 2.8\n   c.int x = 2.8;\n";
    cout<<"   d.x = 2.8;\n\n";
    cout<<"Your Answer - ";
    cin>>q2;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"3.The value of a string variable can be surrounded by single quotes.\n   a.True\n   b.False\n\n";
    cout<<"Your Answer - ";
    cin>>q3;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"4.Which method can be used to find the highest value of x and y?\n   a.max(x,y)\n   b.maximum(x,y)\n   c.largest(x,y)\n";
    cout<<"   d.maxNum(x,y)\n\n";
    cout<<"Your Answer - ";
    cin>>q4;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"5.How do you create a reference variable of an existing variable?\n   a.With the & operator\n   b.With the ref word\n";
    cout<<"   c.With the REF word\n   d.With the * operator\n\n";
    cout<<"Your Answer - ";
    cin>>q5;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"6.Array indexes start with:\n   a.0\n   b.1\n\n";
    cout<<"Your Answer - ";
    cin>>q6;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"7.What is the correct way to create an object called myObj of MyClass?\n   a.class MyClass = new myObj();\n";
    cout<<"   b.MyClass myObj;\n   c.new myObj = MyClass();\n   d.class myObj = new MyClass();";
    cout<<"Your Answer - ";
    cin>>q7;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"8.How do you start writing a while loop in C++?\n   a.while x > y:\n   b.x > y while {\n   c.while x > y {\n";
    cout<<"   d.while (x > y)\n\n";
    cout<<"Your Answer - ";
    cin>>q8;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"9.Which statement is used to stop a loop?\n   a.exit\n   b.return\n   c.break\n   d.stop\n\n";
    cout<<"Your Answer - ";
    cin>>q9;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"10.To declare an array in C++, define the variable type with:\n   a.{}\n   b.[]\n   c.()\n\n";
    cout<<"Your Answer - ";
    cin>>q0;
    cout<<"---------------------------------------------------------------------------------------\n";
    cout<<"---------------------------------------------------------------------------------------\n\n";
    
}
void exam::gk()
{
    cout<<"1.The headquarters of World Wildlife Fund (WWF) is located in …\n   a. Lyons\n   b. Geneva\n   c. Vienna\n   d. Gland\n\n";
    cout<<"Your Answer - ";
    cin>>g1;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"2.Which among the following stadiums is known for Cricket?\n   a. Jawaharlal Nehru Stadium\n   b. Wankhede Stadium\n";
    cout<<"   c. Shivaji Stadium\n   d. Ambedkar Stadium\n\n";
    cout<<"Your Answer - ";
    cin>>g2;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"3.National Centre for Earth Science Studies is located in … \n   a. Udhagamandalam\n   b. Mumbai\n   c. Thiruvananthapuram\n";
    cout<<"   d. Kolkata\n\n";
    cout<<"Your Answer - ";
    cin>>g3;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"4. Indian Institute of Petroleum is located in …\n   a. Bengaluru\n   b. Panaji\n   c. Hyderabad\n   d. Dehradun\n\n";
    cout<<"Your Answer - ";
    cin>>g4;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"5.Buckingham Palace is located in …\n   a. UK\n   b. USA\n   c. Russia\n   d. Italy\n\n";
    cout<<"Your Answer - ";
    cin>>g5;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"6.……………………. was the oldest person who climbed on the Mt. Everest.\n   a. Yuichiro Miura\n   b. Junko Tabei\n";
    cout<<"   c. Tomatsu Nakamura\n   d. Tadao Kanzaki";
    cout<<"Your Answer - ";
    cin>>g6;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"7.The term 'foot fault' is related to …\n   a. Football\n   b. Badminton\n   c. Polo\n   d. Boxing\n\n";
    cout<<"Your Answer - ";
    cin>>g7;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"8.The classical/folk dances namely Kaligopal and Bihu belong to …\n   a. Assam\n   b. Himachal Pradesh\n   c. Goa\n";
    cout<<"d. Kerala\n\n";
    cout<<"Your Answer - ";
    cin>>g8;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"9.The headquarters of United Nations Educational, Scientific and Cultural Organisation (UNESCO) is located in …\n";
    cout<<"   a. Paris\n   b. Geneva\n   c. Rome\n   d. Washington DC\n\n";
    cout<<"Your Answer - ";
    cin>>g9;
    cout<<"---------------------------------------------------------------------------------------\n\n";
    cout<<"10.………………… was the first country, which issued paper currency.\n   a. Greece\n   b. France\n   c. India\n   d. China\n\n";
    cout<<"Your Answer - ";
    cin>>g0;
    cout<<"---------------------------------------------------------------------------------------\n";
    cout<<"---------------------------------------------------------------------------------------\n\n";
    
}
int main()


{
    exam e;
    e.input();
    if (e.exam=="c" || e.exam=="C")
    {
        e.c();
        e.cal();
        e.display();
    }
    else
    if(e.exam=="cpp" || e.exam=="CPP" || e.exam=="Cpp")
    {
        e.cpp();
        e.cal();
        e.display();
    }
    else
    if(e.exam=="gk" || e.exam=="GK" || e.exam=="Gk")
    {
       e.gk();
        e.cal();
        e.display(); 
    }
    return 0;
}

