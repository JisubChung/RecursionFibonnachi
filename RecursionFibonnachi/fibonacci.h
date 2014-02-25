#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <iostream>
using namespace std;

class fibonacci
{
public:
	fibonacci();
	~fibonacci(void);
	
	int fib(int x);
	void fiblist(int y);
	virtual void printFib(int z);
};

#endif