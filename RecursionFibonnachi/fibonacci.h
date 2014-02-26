#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <iostream>
using namespace std;

class fibonacci
{
public:
	//c'tor
	fibonacci();
	fibonacci(int a);
	~fibonacci(void);

	//accessor
	void fibList(); //Lists our fibonacci table
	int getFibTableLength();
	int getFib(int a);

	//mutators
	void setFibTableLength(int m);
	void setFibTable(int n);

	virtual bool recordfib(int i);

	//member functions(?)
	void printFib(int x); //Prints the z'th fibonacci number in the table

private:
	int m_makeFib(int fib); //Is our fibonacci function
	int *m_fibTable;
	int m_fibTableLength;
};

#endif