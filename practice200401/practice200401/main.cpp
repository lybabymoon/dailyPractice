#include <iostream>
using namespace std;
#include <string>
int find(string s1,string s2)
{
	int sum = 0;
	int i = 0;
	int j = 0;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] == s2[0])
		{
			int tmp = i + 1;
			for (j = 1; j < s2.size(); j++)
			{
				if (s1[tmp] != s2[j])
				{
					break;
				}
				tmp++;
			}
			if (j == s2.size())
			{
				i = tmp - 1;
				sum += 1;
			}
		}
	}

	return sum;
}
int main1()
{
	string s1;
	string s2;

	while (cin >> s1 >> s2)
	{
		cout << find(s1, s2) << endl;;
	}
	
	
	return 0;
}