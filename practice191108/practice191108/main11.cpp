#include<iostream>
using namespace std;
#include<string>

void Findnum(string str)
{
	size_t i = 0;
	int count = 0;//����
	int maxnum = 0;//���������ִ�����
	int pos = 0; 
	while (i<str.size())
	{
		while (!isdigit(str[i]))
			i++;//�������־�������
		while (isdigit(str[i]))
		{
			count++;
			i++;
		}
		if (count>maxnum)
		{
			maxnum = count;//����maxnum
			pos = i - maxnum;//���pos
		}
		count = 0;
	}
	for (int j = pos; j<pos + maxnum; j++)
		cout << str[j];
	cout << endl;
}
int main()
{
	string str;
	cin >> str;
	Findnum(str);
	return 0;
}