#include <iostream>
#include <string>
using namespace std;

int getCommonStrLength(string s1, string s2)
{
	int count = 0;
	int max = 0;
	int cur1 = 0;
	int cur2 = 0;
	int j = 0;

	for (int i = 0; i < s1.size(); i++)
	{
		for (j=0; j < s2.size(); j++)
		{
			if (s1[i] == s2[j])
			{
				cur1 = i;
				cur2 = j;
				count = 1;
				while (1)
				{
					i++;
					j++;

					if (s1[i] == s2[j])
					{
						++count;
					}
					else
					{
						i = cur1;
						j = cur2 + 1;
						if (count > max)
						{
							max = count;
						}
						break;
					}
				}
			}
		}
	}

	return max;
}

int main()
{
	string s1;
	string s2;

	while (cin >> s1 && cin >> s2)
	{
		cout << getCommonStrLength(s1, s2) << endl;
	}
	system("pause");
	return 0;
}