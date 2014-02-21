#include "fibonacci.h"

fibonacci::fibonacci()
{
}


fibonacci::~fibonacci(void)
{
}

void fibonacci::fiblist(int y)
{
	for (int x = 0; x < y; x++)
	{
		cout << fibonacci::fib(x);
		if (x+1 < y)
		{
			cout << ", ";
		}
		else
		{
			cout << endl;
		}
	}
}

int fibonacci::fib(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	return (fib(x-1)+fib(x-2));
}