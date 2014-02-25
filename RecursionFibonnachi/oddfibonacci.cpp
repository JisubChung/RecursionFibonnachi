#include "oddfibonacci.h"


oddfibonacci::oddfibonacci(void)
{
}


oddfibonacci::~oddfibonacci(void)
{
}

void printFib(int x)
{
	int abc;
	fibonacci g;
	abc = g.fibonacci::fib(x);
	if (abc%2 != 0)
	{
		cout << abc;
	}
}