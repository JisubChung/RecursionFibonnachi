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

bool oddfibonacci::recordfib(int i)
{
	if (getFib(i)%2!=0)
	{
		setFibTable(i);
		return true;
	}
	else
	{
		return false;
	}
}