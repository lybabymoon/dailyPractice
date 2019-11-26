#include <iostream>
#include <string>
using namespace std;

bool wildcard(string s1, string s2)
{
	int flag1 = 0;
	int j = 0;
	for (int i = 0; i < s2.size(); i++)
	{
		if (s1[j] == '*')
		{
			flag1 = 1;
		}

		if (s1[i] == '.' && flag1 == 1)
		{
			flag1 = 0;
			j++;
		}
		if (s1[j] == s2[i])
		{
			j++;
			continue;
		}
		else if (s1[j] == '?')
		{
			j++;
			continue;
		}
		else if (flag1 )
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string s1;
	string s2;

	while (cin >> s1 && cin >> s2)
	{
		if (wildcard(s1, s2))
			cout << "true" << endl;
		else
		{
			cout << "false" << endl;
		}
	}

	system("pause");
	return 0;
}