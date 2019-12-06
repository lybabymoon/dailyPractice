#include <iostream>
#include <string>
using namespace std;

bool judge(double a, double b)
{
	double bowle = 3.14 * 2 * b;
	if (a > bowle)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	double a, b;
	while (cin >> a >> b)
	{
		if (judge(a, b))
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}