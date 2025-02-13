#include <iostream>
using namespace std;

int main()
{
	int a,b;

	
	char c;
	cin >> a >> c >> b;
	switch(c)
	{
		case '+':
			cout << a+b;
			break;
		case '-':
			cout << a-b;
			break;
		case '*':
			cout << a*b;
			break;
		case '/':
			if(b!=0)
				cout << (double)a/b;
			else 
				cout << "Invalid divisor";
			break;
		case '%':
			if(b!=0)
				cout << a%b;
			else 
				cout << "Invalid divisor";
			break;
		default:
			cout << "Invalid operator";
	}
}
