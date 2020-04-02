#include <iostream>
using namespace std;

#include <vector>
int main1()
{
	vector<long long> ans(91,0);
	ans[0] = 1;
	ans[1] = 2;

	for (int i = 2; i < 90; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
	}

	long long n = 0;

	while (cin >> n)
	{
		cout << ans[n - 1] << endl;
	}
	return 0;
}