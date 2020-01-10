//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string s;
//	string tmp;
//	while (getline(cin, s))
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] != ' ' && s[i] < 'V')
//			{
//				s[i] = s[i] + 5;
//			}
//			else if (s[i] == 'V')
//			{
//				s[i] = 'A';
//			}
//			else if (s[i] == 'W')
//			{
//				s[i] = 'B';
//			}
//			else if (s[i] == 'X')
//			{
//				s[i] = 'C';
//			}
//			else if (s[i] == 'Y')
//			{
//				s[i] = 'D';
//			}
//			else if (s[i] == 'Z')
//			{
//				s[i] = 'E';
//			}
//			else
//			{
//				continue;
//			}
//		}
//		cout << s << endl;
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
#include <string>
using namespace std;
int main() {
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i<s.length(); i++) {
			if (s[i] != ' ') {
				cout << str[(int(s[i]) - 65 - 5 + 26) % 26];
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}