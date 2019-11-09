#include<iostream>
#include<string>
using namespace std;
string change(int m, int n)
{
	string s[16];
	string ans;
	for(int i = 0;i<16;i++)
	{
		if (i < 10)
		{
			s[i] = '0' + i;
		}
		else
		{
			s[i] = 'A' - 10 + i;
		}
	}

	while (m)
	{
 		int tmp = m%n;
		ans = s[tmp] + ans;
		m = m / n;
	}
	return ans;
}

int main()
{
	int n = 0;
	int m = 0;
	cin >> m;
	cin >> n;
	if (m < 0)
	{
		cout << '-' << change(-m, n);
	}
	else
	{
		cout << change(m, n); 
	}
	
	system("pause");
	return 0;
}