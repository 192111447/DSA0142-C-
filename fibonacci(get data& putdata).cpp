#include <iostream>
using namespace std;
class Fibonacci 
{
    public:
	    int a, b, c, n;
    	void generate();
};
void Fibonacci::generate()
{
	a = 0;
	b = 1;
	cout<<"enter a number:";
	cin>>n;
	cout << a << " " << b;
	for (int i = 1; i <= n - 2; i++) 
	{
		c = a + b;
		cout << " " << c;
		a = b;
		b = c;
	}
}
int main()
{
	Fibonacci fib;
	fib.generate();
	return 0;
}
