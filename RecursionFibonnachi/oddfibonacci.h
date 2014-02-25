#ifndef ODDFIBONACCI_H
#define ODDFIBONACCI_H

#include "fibonacci.h"
class oddfibonacci :
	public fibonacci
{
public:
	oddfibonacci(void);
	~oddfibonacci(void);

	static int ofib(int x);
	virtual void printFib(int z);
};

#endif