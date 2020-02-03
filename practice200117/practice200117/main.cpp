#include <iostream>
#include <string>
using namespace std;
int myAtoi(string str) 
{
	int num = 0;
	int iter = 0;
	int flag = 0;   // 判断第一个字符是否为负数
	while (str[iter] == ' ' && iter < str.size())
	{
		iter++;
	}
	
	if (str[iter] == '-')
	{
		flag = 1;
		iter++;
	}
	else if (str[iter] == '+')
	{
		flag = 0;
		iter++;
	}
	else if (str[iter] > '9' || str[iter] < '0')
	{
		return 0;
	}
	for (; iter < str.size(); iter++)
	{
		int tmp = 0;

		if (str[iter] > '9' || str[iter] < '0')
		{
			break;
		}
		else if (str[iter] <= '9' && str[iter] >= '0')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && str[iter] > '7'))
			{
				if (flag == 1)
				{
					return INT_MIN;
				}
				else if (flag == 0)
				{
					return INT_MAX;
				}
			}
			tmp = str[iter] - '0';
			num = num * 10 + tmp;
		}
	}

	return flag == 0 ? num : -num;
}

int main1()
{
	string s1{ "  -0012a42" };

	myAtoi(s1);
	return 0;
}


//int a, b;
//void fun()
//{
//	a = 100;
//	b = 200;
//} 
//int main()
//{
//	int a = 5, b = 7;
//	fun();
//	printf("% d % d / n", a, b);
//	return 0;
//} 
//struct HAR{ int x, y; struct HAR *p; } h[2];
//int main()
//{
//	h[0].x = 1; h[0].y = 2;
//	h[1].x = 3; h[1].y = 4;
//	h[0].p = &h[1]; h[1].p = h;
//	printf("%d,%d \n", (h[0].p)->x, (h[1].p)->y);
//	return 0;
//}
