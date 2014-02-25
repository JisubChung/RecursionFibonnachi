#pragma once
#include "fibonacci.h"
class oddfibonacci :
	public fibonacci
{
public:
	oddfibonacci(void);
	~oddfibonacci(void);

	virtual void printFib(int x);
};

