#include <iostream>
#include <string>
#include <vector>
using namespace std;

string findMaxCommonStr(string s1, string s2)
{
	string big_str;
	string small_str;

	if (s1.size() > s2.size())
	{
		big_str = s1;
		small_str = s2;
	}
	else
	{
		big_str = s2;
		small_str = s1;
	}

	for (int i = 0; i < big_str.size(); i++)
	{

	}
}

int main()
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;


	system("pause");
	return 0;
}