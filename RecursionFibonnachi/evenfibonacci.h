#ifndef EVENFIBONACCI_H
#define EVENFIBONACCI_H

#include "fibonacci.h"
class evenfibonacci :
	public fibonacci
{
public:
	evenfibonacci(void);
	~evenfibonacci(void);

	static int efib(int x);
	virtual void printFib(int z);
};

#endif