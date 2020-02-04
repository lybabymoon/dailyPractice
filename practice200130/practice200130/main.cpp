#include <iostream>
using namespace std;

int func(int i, int j)
{
	if (i <= 0 || j <= 0)
		return 1;
	return 2 * func(i - 3, j / 2);
}

void func1()
{
	
}

void func2()
{
	
}
int main1()
{
	int a = 1; int b = 2;
	for (; a<8; a++)
	{
		b += a; a += 2;
	}
	printf("%d£¬%d\n", a, b);
	return 0;
}