#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
	while (b!=0)
	{
		int tmp = a^b;      //����൱��û�н�λ�ļӷ�
		b = (a&b) << 1;		//�� �൱��ģ���λ ֻ�� 1&1Ϊ1
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