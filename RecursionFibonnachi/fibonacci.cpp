#include "fibonacci.h"

//c'tors and d'tor
fibonacci::fibonacci()
{
}
fibonacci::fibonacci(int n)
{
	m_fibTable = new int[n];
	setFibTableLength(n);
}
fibonacci::~fibonacci(void)
{
	delete [] m_fibTable;
}

//accessors
void fibonacci::fibList()
{
	int y = getFibTableLength();
	for (int x = 0; x < y; x++)
	{
		printFib(x);
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
int fibonacci::getFibTableLength()
{
	return m_fibTableLength;
}
int fibonacci::getFib(int a)
{
	int b = m_makeFib(a);
	return b;
}

//mutators
void fibonacci::setFibTableLength(int m)
{
	m_fibTableLength = m;
}
void fibonacci::setTable()
{
	int j = 0;
	int n = getFibTableLength();
	for (int i=0; j<n; i++)
	{
		if (continueFib(i) == true)
		{
			setFibTable(j, i);
			j++;
		}
	}
}
void fibonacci::setFibTable(int index, int fibnum)
{
	m_fibTable[index] = m_makeFib(fibnum);
}

//public member functions
void fibonacci::printFib(int z)
{
	cout << m_fibTable[z];
}
bool fibonacci::continueFib(int j) //for the parent function, this is trivial
{
	if (j>=0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//private member function
int fibonacci::m_makeFib(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == 1)
	{
		return 1;
	}
	return (m_makeFib(x-1)+m_makeFib(x-2));
}
