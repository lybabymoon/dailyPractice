#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s;
	// ע������Ҫʹ��getline��cin>>s�����ո�ͽ��ս�����
	getline(cin, s);
	// ��ת��������
	reverse(s.begin(), s.end());
	// ��ת����
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
			end++;
		reverse(start, end);
		if (end != s.end())
			start = end + 1;
		else
			start = end;
	}
	cout << s << endl;
	return 0;
}