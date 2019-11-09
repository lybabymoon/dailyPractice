#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main1()
{
	string s1;
	vector<int> cur;
	vector<int> ans;
	int count = 0;
	int max = 0;
	cin >> s1;

	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] >'0' && s1[i] < '9')
			ans.push_back(s1[i]);
	}
	
	for (int i = 2; i < ans.size(); i++)
	{
		if ( ((ans[i] - 1) == (ans[i - 1]) && (ans[i] + 1) == (ans[i+1]))
		  || ((ans[i] + 1) == (ans[i - 1]) && (ans[i] - 1) == (ans[i+1])) )
		{
			count++;
		}
		else
		{

		}
	}

	if (ans.size() == 1)
		cout << ans[0];

	if (ans.size() == 2)
	{
		if ((ans[0] + 1 == ans[1]) || (ans[0] - 1 == ans[1]))
		{
			cout << ans[0] << ans[1];
		}
		else
		{
			cout << ans[0];
		}
	}

	system("pause");
	return 0;
}