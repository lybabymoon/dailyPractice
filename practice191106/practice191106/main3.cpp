#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1;
	string s2;
	string s3;
	int flag = 0;
	cout << "s1:";
	cin >> s1;

	cout << "s2:";
	cin >> s2;

	for (int i = 0; i < s1.size(); i++)
	{
		for (int j = 0; j < s2.size(); j++)
		{
			if (s1[i] == s2[j])
			{
				flag = 0;
				break;
			}
			else
			{
				flag = 1;
			}
		}
		if (flag == 1)
		{
			s3.push_back(s1[i]);
		}
	}
	cout << s3;
	system("pause");
	return 0;
}