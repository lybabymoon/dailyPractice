#include <iostream>
#include <string>
#include <vector>
using namespace std;

char findOnlyOneTime(string s1,int & flag)
{
	if (s1.size() == 1)
	{
		flag = 1;
		return s1[0];
	}
	vector<int> ans(128,0);
	vector<int> ans1(128, 0);
	char a = '\0';
	int j = 0;
	int count = 0;
	for (int i = 0; i < s1.size();i++)
	{
		ans[s1[i]]++;
		ans1[s1[i]] = i;
	}
	int tmp = 0;
	for (j = 0; j < ans.size(); j++)
	{
		if (ans[j] == 1 )
		{
			flag = 1;
			count++;
			tmp = j;
		}
	}
	
	for (j = 0; j < ans.size(); j++)
	{
		if (count == 0)
		{
			break;
		}
		if (ans[j] == 1)
		{
			if (ans1[j] <= ans1[tmp])
			{
				a = j;
				tmp = j;
			}
			count--;
		}
	}

	return a;
}
int main()
{
	string s1;
	int flag = 0;
	while (cin >> s1)
	{
		char a = findOnlyOneTime(s1, flag);
		if (flag)
		{
			cout << a << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
		flag = 0;
	}

	system("pause");
	return 0;
}