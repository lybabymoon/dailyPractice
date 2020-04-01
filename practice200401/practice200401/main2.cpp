#include <iostream>
using namespace std;
#include <vector>

int main()
{
	vector<long long> ans(81, 0);
	ans[0] = 1;
	ans[1] = 1;
	for (int i = 2; i < 80; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
	}

	int day1;
	int day2;
	while (cin >> day1 >> day2)
	{
		long long sum = 0;
		for (int i = day1 - 1; i < day2; i++)
		{
			sum += ans[i];
		}

		cout << sum << endl;
	}
	return 0;
}