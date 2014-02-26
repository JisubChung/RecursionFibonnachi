#ifndef ODDFIBONACCI_H
#define ODDFIBONACCI_H

#include "fibonacci.h"
class oddfibonacci :
	public fibonacci
{
public:
	oddfibonacci(void);
	oddfibonacci(int n);
	~oddfibonacci(void);

	virtual bool continueFib(int j);
};

#endif