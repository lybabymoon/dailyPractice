#include<iostream>
#include<string>
using namespace std;

int main()
{
	char value[13] = { '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A', '2' };
	string s;
	getline(cin, s);
	int i, j, k, w;
	int type1, type2;// 1 �� 2 �� 3������ 4��ը�� 5��˳�� 6������ 7:����
	for (i = 0; i<s.size(); i++) //��������� �����Ƶ�����
	{
		if (s[i] == '-')
		{
			if (i == 1)
				type1 = 1;
			else if (s[1] != ' ')  //s[1]�����ڿո������
			{
				if (i == 11)
					type1 = 7;   //����������ӣ�joker JOKER-1 2 3 4 5
				else
					type1 = 6;
			}
			else if (i == 3)
				type1 = 2;
			else if (i == 5)
				type1 = 3;
			else if (i == 7)
				type1 = 4;
			else
				type1 = 5;
			break;
		}
	}

	j = i;

	if (s.size() == j + 2)
		type2 = 1;
	else if (s[j + 2] != ' ')    //s[1]�����ڿո������
	{
		if (s.size() - j - 1 == 11)
			type2 = 7;       //����������ӣ�1 2 3 4 5-joker JOKER
		else
			type2 = 6;
	}
	else if (s.size() - j - 1 == 3)
		type2 = 2;
	else if (s.size() - j - 1 == 5)
		type2 = 3;
	else if (s.size() - j - 1 == 7)
		type2 = 4;
	else
		type2 = 5;

	if (type1 == type2)   //���������ͬ
	{
		if (type1 == 6 && type2 == 6)
		if (s[0] == 'J')
		for (w = 0; w<j; w++)
			cout << s[w];
		else
		for (w = j + 1; w<s.size(); w++)
			cout << s[w];
		else
		{
			for (i = 0; i<13; i++)  //ͨ�������� �Ƚ������Ƶ�һ���ƵĴ�С
			if (s[0] == value[i])
				break;

			for (k = 0; k<13; k++)
			if (s[j + 1] == value[k])
				break;

			if (i>k)
			for (w = 0; w<j; w++)
				cout << s[w];
			else
			for (w = j + 1; w<s.size(); w++)
				cout << s[w];
		}
	}
	else
	{
		if (type1 == 6)   //�������������  ��������
		for (w = 0; w<j; w++)
			cout << s[w];
		else if (type2 == 6)
		for (w = j + 1; w<s.size(); w++)
			cout << s[w];

		else if (type1 == 4)
		{
			if (type2 == 7)
			for (w = j + 1; w<s.size(); w++)
				cout << s[w];
			else
			for (w = 0; w<j; w++)
				cout << s[w];
		}
		else if (type1 == 7)
		{
			for (w = 0; w<j; w++)
				cout << s[w];
		}

		else if (type2 == 4 || type2 == 7)
		for (w = j + 1; w<s.size(); w++)
			cout << s[w];
		else
			cout << "ERROR";
	}
	cout << endl;
	//     cout<<type1<<"     "<<type2<<endl;
	system("pause");
	return 0;
}
