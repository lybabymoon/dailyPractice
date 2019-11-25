#include <iostream>
#include <vector>
#include <string>
using namespace std;

string add(string s1, string s2)
{
	string ans;
	int i = s1.size() - 1, j = s2.size() - 1;
	int tmp = 0;

	while (i >= 0 || j >= 0 || tmp != 0)
	{
		if (i >= 0)
		{
			tmp += s1[i--] - '0';
		}

		if (j >= 0)
		{
			tmp += s2[j--] - '0';
		}

		ans += to_string(tmp % 10);
		tmp = tmp / 10;
	}

	for (int y = 0, z = ans.size() - 1; y < z; y++, z--)
	{
		swap(ans[y], ans[z]);
	}
	return ans;
}

int main()
{
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;

	cout << add(s1, s2);
	system("pause");
	return 0;
}