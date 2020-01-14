#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string str) 
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			char tmp = str[i];
			str[i] = tmp + 32;
		}
	}

	return str;
}

string toLowerCase2(string str)
{
	for (auto &i : str){
		i |= 32;
	}

	return str;
}
int main1()
{
	/*int	num = 7,sum = 7;
	sum = num++;
	sum++;
	++num;
	cout << sum;*/

	string s{ "LOVELY" };
	toLowerCase(s);
	return 0;
}