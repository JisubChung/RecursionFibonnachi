#include "evenfibonacci.h"


evenfibonacci::evenfibonacci(void)
{
}

evenfibonacci::evenfibonacci(int n) : fibonacci(n)
{
}


evenfibonacci::~evenfibonacci(void)
{
}

bool evenfibonacci::continueFib(int j)
{
	if (getFib(j)%2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}