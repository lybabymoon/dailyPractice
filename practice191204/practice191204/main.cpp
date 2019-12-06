#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findFBNum(int n)
{
	vector<long> cur(n+1,0);
	long long sum;
	long tmp;
	long long f1 = 1;
	long long f2 = 1;
	long long f3 = 2;
	
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else if (n == 3)
	{
		return 2;
	}
	else if (n == 0)
	{
		return 0;
	}

	for (int i = 3; i <= n; i++)
	{
		f1 = f2 % 10000;
		f2 = f3 % 10000;
		f3 = f1 + f2;
	}
	sum = f3 % 10000;
	tmp = sum;
	return tmp;
}

vector<int> findPassword(vector<int> ans, int n)
{
	vector<int> cur;

	for (int i = 0; i < n; i++)
	{
		int tmp = findFBNum(ans[i]);
		cur.push_back(tmp);
	}

	return cur;
}

int main()
{
	int n = 0;
	
	
	while (cin >> n)
	{
		vector<int> ans(n,0);
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			ans[i] = tmp;
		}

		vector<int> cur = findPassword(ans, n);
	/*	for (auto & i : cur)
		{
			if (i < 1000)
			{
				string as = to_string(i);
				for (int j = 0; j < 4 - as.size(); j++)
				{
					b += "0";
				}
				b += as;
			}
			else
			{
				b = to_string(i);
			}
			ret += b;
		}

		cout <<ret << endl;*/

		for (auto & i : cur)
		{
			printf("%04d", i);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}