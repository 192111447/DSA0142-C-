#include <iostream>
using namespace std;
class student
{
 public:
 	string name,grade;
 	int age,tot;
  student()
  {
   cout<<" Enter Student Basic Information"<<endl;
  }
  void getdata()
  {
  	
  	cout<<"\n Enter the name of student:";
  	cin>>name;
  	cout<<"\n Enter age of  student:";
  	cin>>age;
  	cout<<"\n Enter the total marks of student:";
  	cin>>tot;
  	cout<<"\n Enter grade of student:";
  	cin>>grade;
  }
};
class seniorstudent:public student
{
 public:
  seniorstudent()
  {
   cout<<"\n I am senior studennt"<<endl;
  }
  void putdata()
  {
  	cout<<"\n The name of student\t"<<name;
  	cout<<"\n The age of  student\t"<<age;
  	cout<<"\n The total marks of student\t"<<tot;
  	cout<<"\n  The grade of student is \t"<<grade;
  	
  }
};
int main()
{
 seniorstudent ss;
 ss.getdata();
 ss.putdata();

}
