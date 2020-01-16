#include <iostream>
using namespace std;

int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	} 
	return b;
}

int main()
{
	int b[2][2] = { 0, 1, 2, 3 };
	cout << b[1][1];
	cout << *(b[1] + 1);
	cout << *(*b + 1) + 1;
	cout << (*(b + 1))[1];
	func(1);
	return 0;
}