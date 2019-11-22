#include <iostream>
#include <vector>
#include <string>
using namespace std;

void analyzeDatament(string s)
{
	int count = 0;
	int flag = 0;
	vector<string> cur(1);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '"' && flag == 0)
		{
			flag = 1;
		}
		else if (s[i] != ' ' || flag==1)
		{
			if (s[i] == '"')
			{
				flag = 0;
			}
			else
			{
				cur[count].push_back(s[i]);
			}
		}
		else if (s[i] == ' ' && flag==0)
		{
			count++;
			cur.resize(count+1);
		}

	}

	cout << count+1 << endl;
	for (auto & i : cur)
	{
		cout << i << endl;
	}
}
int main()
{
	string s = "xcopy /s c:\\ d:\\";
	//getline(cin, s);
	analyzeDatament(s);
	return 0;
}