#include <iostream>
#include <vector>
using namespace std;

vector<int> change(int nums)
{
	vector<int> ans;
	int tmp = 0;
	int cur = nums;

	while (cur)
	{
		tmp = cur % 10;
		ans.push_back(tmp);
		cur = cur / 10;
	}
	return ans;
}
int addDigits(int num) {
	vector<int> ans;
	int sum = num;
	do
	{
		ans = change(sum);
		sum = 0;
		for (int i = 0; i < ans.size(); i++)
		{
			sum += ans[i];
		}
	} while (sum / 10);
	return sum;
}

int main2()
{
	int num = 0;
	while (cin >> num)
	{
		cout << addDigits(num) << endl;
	}
	system("pause");
	return 0;
}