#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <iostream>
using namespace std;

class fibonacci
{
public:
	//c'tors and d'tor
	fibonacci();
	fibonacci(int a);
	~fibonacci(void);

	//accessor
	void fibList(); //Technically not an accessor, lists our fibonacci table
	int getFibTableLength();
	int getFib(int a);

	//mutators
	void setFibTableLength(int m);
	void setTable(); //technically not a mutator as it only accesses the following function
	void setFibTable(int n, int m);

	//member functions
	void printFib(int x); //Prints the z'th fibonacci number in the table
	virtual bool continueFib(int j); //permits storing of fib in table

private:
	int m_makeFib(int fib); //Is our fibonacci function
	int *m_fibTable;
	int m_fibTableLength;
};

#endif