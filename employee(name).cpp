#include<iostream>
using namespace std;
int health=200,tax=300;
class employee
{
    int id,basic,hra,da,gp,np,deduction;
    char name[20];
    public:
    void getdata();
    void grasspay();
    void netpay();
    void display();
};
void employee::getdata()
{
    cout<<"Enter the employee name:"<<endl;
    cin>>name;
    cout<<"Enter the employee id:"<<endl;
    cin>>id;
    cout<<"Enter the basic salary:"<<endl;
    cin>>basic;
    cout<<"Enter the hra:"<<endl;
    cin>>hra;
    cout<<"Enter the da:"<<endl;
    cin>>da;
}
void employee::grasspay()
{
    gp=basic+hra+da;    
}
void employee::netpay()
{
    deduction=health+tax;
    np=gp-deduction;
}
void employee::display()
{
    cout<<name<<"\t\t"<<id<<"\t"<<basic<<"\t"<<hra<<"\t"<<da<<"\t"<<gp<<"\t"<<np<<"\t"<<endl;  
}
int main()
{
    cout<<"******"<<endl;
    cout<<"Employee details"<<endl;
    cout<<"******"<<endl;
    int n,i;
    employee e[20];
    cout<<"Enter the number of employees:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        e[i].getdata();
        e[i].grasspay();
        e[i].netpay();
    }
    cout<<"EMPLOYEE NAME\tID\tBASIC\tHRA\tDA\tGP\tNP"<<endl;
    for(i=0;i<n;i++)
    {
        e[i].display();    
    }
    return 0;
}
