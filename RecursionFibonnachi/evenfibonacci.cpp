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

bool evenfibonacci::recordfib(int i)
{
	if (getFib(i)%2==0)
	{
		setFibTable(i);
		return true;
	}
	else
	{
		return false;
	}
}