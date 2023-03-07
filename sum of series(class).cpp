#include<iostream>
using namespace std;
class Test 
{
   int c;
public:
   Test() 
   {
       cout << "Sum is:";
   }
   Test(int a, int b) 
   {
       c = a + b;
   }
   void display() {
       cout << c;
   }
};
int main() 
{
   int a, b;
   cout << "Enter two numbers:";
   cin >> a>>b;
   Test t;
   Test tt(a, b);
   tt.display();
   return 0;
}
