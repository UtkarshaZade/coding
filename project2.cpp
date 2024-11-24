// Shop reciept
#include<iostream>
#include<string>
using namespace std;

class shop
{
    public:
    string name,obj[100],ans;
    int n;
    float q[100];
    double amt,v[100],gst,t=0,samt=40,pamt=10,eamt=5,s1amt=10,p1amt=50,namt=60,s2amt=42,camt=35;
    double total,ramt=30,damt=45,bamt=47,oamt=120,wamt=60,b1amt=60,aamt=200;
    void display();
    void cal();
    void input();
    void details();
};

void shop::details()
{
    cout<<"\n********************************************* INFINITY SUPER-MARKET ************************************************";
    cout<<"\n\nITEMS LIST\n\n";
    cout<<"------------------------------------------------------------------------------------------------------------------------\n\n";
    cout<<"GROCERY ITEMS                        Fruits and Vegetables                          Stationary\n";
    cout<<"1.Sugar - 40 rs per kg               1.Apple - 200 rs per kg                        1.Pencil - 10 rs each\n";
    cout<<"2.Rice - 30 rs per kg                2.Banana - 5 rs per piece                      2.Scale - 10 rs each\n";
    cout<<"3.Dal - 45 rs per kg                 3.Spinach - 42 rs per 1/2 kg                   3.Camlin notebook - 60 rs each\n";
    cout<<"4.Oil - 120 rs per lit               4.Cabbage - 35 rs per kg                       4.Eraser - 5 rs each\n";
    cout<<"5.Wheat - 60 rs per kg               5.Berries - 47 rs per kg                       5.Pouch - 50 rs \n";

}
void shop::display()
{
    cout<<"\n******************** INFINITY SUPER-MARKET *********************";
    cout<<"-----------------------------------------------------------------\n";
    cout<<"\nRECEIPT";
cout<<"\n-----------------------------------------------------------------\n\n";
cout<<"Name : "<<name<<"                                     Time : 12:45"<<endl;
cout<<"No. of items : "<<n<<"                             Place : Yavatmal"<<endl<<endl;
cout<<"--------------------------------------------------------------------\n";
cout<<"Name of item                 Quantity(kg)          Amount (rs)"<<endl<<endl;
for(int i=0;i<n;i++)
{
cout<<obj[i]<<"\t\t\t\t "<<q[i]<<" kg\t\t     "<<v[i]<<endl;
}
cout<<"--------------------------------------------------------------------\n";
cout<<"                                                   Total "<<t<<"   \n\n";
cout<<"--------------------------------------------------------------------\n\n";
cout<<"GST = 18 % per product \n";
cout<<"--------------------------------------------------------------------\n\n";
cout<<"                                                   Total = "<<total<<" rs\n";
cout<<"                                       Amount to be paid = "<<total<<" rs\n";
cout<<"--------------------------------------------------------------------\n\n";
cout<<"Thank You For Shopping..Have a Wonderful Day!";
}

void shop::cal()
{
    for(int i=0;i<n;i++)
    {
    if(obj[i]=="sugar")
        v[i]=samt*q[i];
    
    else 
    if (obj[i]=="rice")
        v[i]=ramt*q[i];
    
    else
    if (obj[i]=="dal")
        v[i]=damt*q[i];
    
    else
    if (obj[i]=="wheat")
        v[i]=wamt*q[i];

    else
    if (obj[i]=="oil")
        v[i]=oamt*q[i];

    else
    if (obj[i]=="pencil")
        v[i]=pamt*q[i];

    else
    if (obj[i]=="eraser")
        v[i]=eamt*q[i];

    else
    if (obj[i]=="scale")
        v[i]=s1amt*q[i];

    else
    if (obj[i]=="pouch")
        v[i]=p1amt*q[i];

    else
    if (obj[i]=="notebook")
        v[i]=namt*q[i];

    else
    if (obj[i]=="apple")
        v[i]=aamt*q[i];

    else
    if (obj[i]=="banana")
        v[i]=b1amt*q[i];

    else
    if (obj[i]=="berries")
        v[i]=bamt*q[i];

    else
    if (obj[i]=="cabbage")
        v[i]=camt*q[i];

    else
    if (obj[i]=="spinach")
        v[i]=s2amt*q[i];
    }
    for(int i=0;i<n;i++)
    {
        t=t+v[i];
    }
    gst=(t*18)/100;
    total=t+gst;
}
 
void shop::input()
{
    cout<<"\n **  Hello Sir/Mam  **\n";
    cout<<"May i know how many items you would like to get from our store ? ";
    cin>>n;
    cout<<"May i know the Items and there Quantity(in kg) Please ? ";
    for(int i=0;i<n;i++)
    { 
        cin>>obj[i];
        cin>>q[i];
    }
    cout<<"Would to get something else ? ";
    cin>>ans;
    if(ans=="yes" || ans=="Yes" || ans=="YES")
    {
        while(ans=="yes")
        {
        cout<<"May i know the Items and there Quantity(in kg) Please ? ";
        cin>>obj[n];
        cin>>q[n];
        n++;
        cout<<"Would to get something else ? ";
        cin>>ans;
        }
    }
    cout<<"May i know your name Please ? ";
    cin>>name;
}
int main()
{
    shop s;
    s.details();
    s.input();
    s.cal();
    s.display();
    return 0;
}
