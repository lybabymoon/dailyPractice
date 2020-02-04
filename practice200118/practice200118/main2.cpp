#include<iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) 
{
	if (chars.empty())
	{
		return 0;
	}
	else if (chars.size() == 1)
	{
		return 1;
	}
	
	int k = 0;
	int count = 1;   //统计每个字母出现的次数

	for (int i = 0; i < chars.size()-1; i++)
	{
		if (chars[i] == chars[i + 1])
		{
			count++;
		}
		else if(chars[i] != chars[i + 1] && count>1)
		{
			chars[k++] = chars[i];
			
			while (count / 10)
			{
				int tmp = count / 10;
				count = count % 10;
				chars[k++] = tmp + '0';
			}

			if (count <= 9)
			{
				chars[k++] = count + '0';
			}
			count = 1;
		}
		else if(chars[i] != chars[i + 1] && count==1)
		{
			chars[k++] = chars[i];
		}
	}

	if (chars[chars.size() - 2] == chars[chars.size() - 1])
	{
		chars[k++] = chars[chars.size() - 2];
		while (count / 10)
		{
			int tmp = count / 10;
			count = count % 10;
			chars[k++] = tmp + '0';
		}

		if (count <= 9)
		{
			chars[k++] = count + '0';
		}
	}
	else if (chars[chars.size() - 2] != chars[chars.size() - 1] && count>1)
	{
		chars[k++] = chars[chars.size() - 2];
		while (count / 10)
		{
			int tmp = count / 10;
			count = count % 10;
			chars[k++] = tmp + '0';
		}

		if (count <= 9)
		{
			chars[k++] = count + '0';
		}
		
		
		chars[k++] = chars[chars.size() - 1];
	}
	else if (chars[chars.size() - 2] != chars[chars.size() - 1] && count == 1)
	{
		chars[k++] = chars[chars.size() - 1];
	}
	return k;
}

int compress2(vector<char>& chars)
{
	int n = chars.size();
	int cur = 0;
	for (int i = 0, j = 0; i < n; j = i)
	{
		while (i < n&&chars[i] == chars[j])
		{
			i++;
		}

		chars[cur++] = chars[j];
		if (i - j == 1)
		{
			continue;
		}

		string s = to_string(i - j);
		for (int t = 0; t < s.size(); t++)
		{
			chars[cur++] = s[t];
		}
	}
	return cur;
}
int main()
{
	vector<char> chars{ 'a', 'b', 'c' };
	compress2(chars);
	return 0;
}