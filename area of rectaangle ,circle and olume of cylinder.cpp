#include <iostream>
using namespace std;
class circle
{
	protected:
		float radius;
	public:
		void get_r(void)
		{
			cout<<"\nEnter the radius= ";
			cin>>radius;
		}
		void display_r(void)
		{
			cout<<"\nThe radius of a circle= \n"<<22/7*radius*radius;
		}
};
class rectangle
{
	protected:
		float length,breadth;
	public:
		void get_details(void)
		{
			cout<<"\nEnter the length= ";
			cin>>length;
			cout<<"\nEnter the breadth= ";
			cin>>breadth;
		}
		void display_details(void)
		{
			cout<<"\nArea of rectangle= "<<(length*breadth);
		}
};
class cylinder:public circle,public rectangle
{
	public:
		void cylvol(void)
		{
		    cout<<"\nVolume of the cylinder= \n"<<22/7*radius*radius*length;
		}
};
int main()
{
	circle c;
	c.get_r();
	c.display_r();
	rectangle r;
	r.get_details();
	r.display_details();
	cylinder cy;
	cy.get_r();
	cy.get_details();
	cy.cylvol();
	return 0;
}
