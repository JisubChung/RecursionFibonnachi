#include "fibonacci.h"

fibonacci::fibonacci()
{
}

fibonacci::fibonacci(int n)
{
	m_fibTable = new int[n];
	setFibTableLength(n);
	int j = 0;
	for (int i=0; j<n; i++)
	{
		if (recordfib(i) == true)
		{
			j++;
		}
	}
}

fibonacci::~fibonacci(void)
{
	delete [] m_fibTable;
}

void fibonacci::setFibTableLength(int m)
{
	m_fibTableLength = m;
}

int fibonacci::getFibTableLength()
{
	return m_fibTableLength;
}

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

void fibonacci::printFib(int z)
{
	cout << m_fibTable[z];
}

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

bool fibonacci::recordfib(int i) //for the parent function, this is trivial
{
	if (true)
	{
		setFibTable(i);
		return true;
	}
	//else
	//{
	//	return false;
	//}
}

void fibonacci::setFibTable(int n)
{
	m_fibTable[n] = m_makeFib(n);
}

int fibonacci::getFib(int a)
{
	int b = m_makeFib(a);
	return b;
}