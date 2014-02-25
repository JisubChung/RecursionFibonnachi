#pragma once
#include "fibonacci.h"
class evenfibonacci :
	public fibonacci
{
public:
	evenfibonacci(void);
	~evenfibonacci(void);

	virtual void printFib(int x);
};

