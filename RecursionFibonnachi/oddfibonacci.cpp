#include "oddfibonacci.h"


oddfibonacci::oddfibonacci(void)
{
}

oddfibonacci::oddfibonacci(int n) : fibonacci(n)
{
}


oddfibonacci::~oddfibonacci(void)
{
}

bool oddfibonacci::continueFib(int j)
{
	if (getFib(j)%2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}