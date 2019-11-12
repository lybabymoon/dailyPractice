#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class solution
{
public:
	long changeStringToNum(string str)
	{
		long num = 0;
		int count = 0;

		for (int i = str.size()-1; i >=0; i--)
		{
			if (str[i]>='0' && str[i] <= '9')
			{
				num = num + (str[i]-'0') * pow(10, count);
			}
			if ((str[i] >= 'a'&&str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			{
				return 0;
			}
			count++;
		}

		if (str[0] == '-')
			num = -num;

		return num;
	}
};

int main()
{
	solution no1;
	string s1;
	cin >> s1;

	cout << no1.changeStringToNum(s1);
	system("pause");
	return 0;
}
