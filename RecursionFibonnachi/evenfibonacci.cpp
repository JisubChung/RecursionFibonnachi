#include "evenfibonacci.h"


evenfibonacci::evenfibonacci(void)
{
}


evenfibonacci::~evenfibonacci(void)
{
}

int evenfibonacci::efib(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	return (efib(x-1)+efib(x-2));
}

void printFib(int x)
{
	int abc = evenfibonacci::efib(x);
	if (abc%2 == 0)
	{
		cout << abc;
	}
}