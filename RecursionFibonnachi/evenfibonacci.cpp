#include "evenfibonacci.h"


evenfibonacci::evenfibonacci(void)
{
}


evenfibonacci::~evenfibonacci(void)
{
}

void printFib(int x)
{
	int abc;
	fibonacci g;
	abc = g.fibonacci::fib(x);
	if (abc%2 == 0)
	{
		cout << abc;
	}
}