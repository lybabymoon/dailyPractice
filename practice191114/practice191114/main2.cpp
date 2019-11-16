#include<iostream>
#include<algorithm>
using namespace std;

//bool judgePrime(int num)
//{
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			return false;
//		}
//	}
//
//	return true;
//}

int findCommonFactor(int num1,int num2)   //求出最大公因数
{
	
	return !num2 ? num1 : findCommonFactor(num2, num1%num2);
}

int mixCommonNum(int a, int b)
{
	int max_common_factor = 0;
	//if (judgePrime(a) && judgePrime(b))
	//{
	//	return a*b;
	//}

	max_common_factor = a/findCommonFactor(a,b)*b;

	return max_common_factor;
}

int main2()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	cout << mixCommonNum(a, b);
	system("pause");
	return 0;
}