#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main1()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	cin >> num1;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	A = (num1 + num3) / 2;
	B = (num2 + num4) / 2;

	if ((num1 + num2) == (num3 - num4))
	{
		C = num4 - B;
		cout << A << " " << B << " " << C << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	
	system("pause");
	return 0;
}