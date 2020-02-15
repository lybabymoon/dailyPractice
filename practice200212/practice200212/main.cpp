#include <iostream>
#include <string>
using namespace std;


int main1()
{
	string s1;
	string s2;
	int flag = 0;
	int tmp = 0;
	while (getline(cin, s1) && getline(cin, s2))
	{
		for (int i = 0; i < s1.size(); i++)
		{
			if (flag)
			{
				i = tmp;
			}
			for (int j = 0; j < s2.size(); j++)
			{
				if (s1[i] == s2[j])
				{
					s1.erase(s1.begin()+i);
					tmp = i;
					flag = 1;
					break;
				}
				else
				{
					flag = 0;
				}
			}
		}

		cout << s1 << endl;
	}

	
	return 0;
}

