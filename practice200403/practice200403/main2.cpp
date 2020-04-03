#include <iostream>
using namespace std;
#include <string>
#include <istream>
bool judgeString(string s1, string s2)
{
	int i = 0;
	
	while (i < s1.size())
	{
		if (s1[i] == '"')
		{
			i++;
			int j = 0;
			for (; j < s2.size(); j++)
			{
				if (s1[i] == '"')
				{
					break;
				}
				if (s1[i] != s2[j])
				{
					break;
				}
				i++;
			}
			if (j == s2.size() && s1[i+1] == '"')
			{
				return true;
			}
			while (s1[i] != '"') i++;
			i++;
		}
		else
		{
			int j = 0;
			for (; j < s2.size(); j++)
			{
				
				if (s1[i] == ',')
				{
					i++;
					break;
				}
				if (s1[i] != s2[j])
				{
					break;
				}
				++i;
			}

			
			if (j == s2.size() && (s1[i] == ',' || i == s1.size()))
			{
				return true;
			}
			while (s1[i] != ',') i++;
			i++;
		}

	}
	return false;
}
int main()
{
	string s1;
	string s2;
	while (getline(cin,s1) && getline(cin,s2))
	{

		if (!judgeString(s1, s2))
		{
			cout << "Important!" << endl;
		}
		else
		{
			cout << "Ignore" << endl;
		}
	}
	return 0;
}
