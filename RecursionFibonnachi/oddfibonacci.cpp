#include "oddfibonacci.h"


oddfibonacci::oddfibonacci(void)
{
}


oddfibonacci::~oddfibonacci(void)
{
}

int oddfibonacci::ofib(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	return (ofib(x-1)+ofib(x-2));
}

void printFib(int x)
{
	int abc = oddfibonacci::ofib(x);
	if (abc%2 != 0)
	{
		cout << abc;
	}
}

