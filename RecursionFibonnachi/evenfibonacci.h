#ifndef EVENFIBONACCI_H
#define EVENFIBONACCI_H

#include "fibonacci.h"
class evenfibonacci :
	public fibonacci
{
public:
	evenfibonacci(void);
	evenfibonacci(int n);
	~evenfibonacci(void);

	virtual bool recordfib(int i);
};

#endif