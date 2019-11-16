#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool judgeLength(vector<string> & cur)
{
	vector<string> tmp(cur);

	for (int i = 0; i < tmp.size()-1; i++)
	{
		if (tmp[i].size()>tmp[i + 1].size())
			return false;
	}
	return true;
}

bool judgeAlphabetOrder(vector<string> & cur)
{
	vector<string> tmp(cur);
	
	for (int i = 0; i < tmp.size() - 1; i++)
	{
		if (tmp[i] > tmp[i + 1])
			return false;
	}

	return true;

}

int main()
{
	int n = 0;
	cin >> n;
	getchar();
	
	vector<string> ans(n,"a");
	for (int i = 0; i < n; i++)
	{
		getline(cin, ans[i]);
	}
	if (n == 0)
	{
		cout << "none" << endl;
	}
	else if (judgeLength(ans) && judgeAlphabetOrder(ans))
	{
		cout << "both" << endl;
	}
	else if (judgeLength(ans) && !judgeAlphabetOrder(ans))
	{
		cout << "lengths" << endl;
	}
	else if (!judgeLength(ans) && judgeAlphabetOrder(ans))
	{
		cout << "lexicographically" << endl;
	}
	else
	{
		cout << "none" << endl;
	}
	system("pause");
	return 0;
}