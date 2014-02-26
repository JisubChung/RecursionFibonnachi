#include <iostream>
#include "fibonacci.h"
#include "oddfibonacci.h"
#include "evenfibonacci.h"

using namespace std;

int main()
{
	cout << "Select the type of function you'd like: \n";
	cout << "1: Sum of normal fibonacci numbers \n";
	cout << "2: Sum of odd fibonacci numbers \n";
	cout << "3: Sum of even fibonacci numbers \n";
	int x, a;
	a=x=0;
	cin >> x;
	switch (x)
	{
	case 1: 
		cout << "Up to how many fibonacci numbers do you want to go up to? ";
		cin >> a;
		break;
	case 2:
		cout << "Up to how many fibonacci numbers do you want to go up to? ";
		cin >> a;
//		oddFib(a);
		break;
	case 3:
		cout << "Up to how many fibonacci numbers do you want to go up to? ";
		cin >> a;
//		evenFib(a);
		break;
	default:
		cout << "You didn't select a correct option.";
		break;
	}
	if (x == 1)
	{
		fibonacci b(a);
		b.fibList();
	}
	else if (x == 2)
	{
		oddfibonacci b(a);
		b.fibList();
	}
	else if (x == 3)
	{
		evenfibonacci b(a);
		b.fibList();
	}
	cin >> x;
	return 0;
}