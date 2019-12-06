#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
	while (b!=0)
	{
		int tmp = a^b;      //异或相当于没有进位的加法
		b = (a&b) << 1;		//与 相当于模拟进位 只有 1&1为1
		a = tmp;
	}

	return a;
}

int main1()
{
	int a, b;

	while (cin >> a >> b)
	{
		cout << add(a, b) << endl;
	}
	return 0;
}