#include <iostream>
using namespace std;

bool judgeLeapYear(int year)
{
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		return true;
	else
		return false;
}
int judgeIsSucessInput(int year, int month, int day)
{
	if (judgeLeapYear(year) && month == 2 && day <= 29)
		return 0;
	else if (year >= 0 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31)
		return 0;
	else if (year >= 0 && (month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
		return 0;
	else if (!judgeLeapYear(year) && month == 2 && day <= 28)
		return 0;
	else if (year < 0 )
		return -1;
	else - 1;
}

int judgeDate(int year,int month,int day)
{
	int sum = 0;

	for (int i = 1; i < month; i++)
	{
		if (judgeLeapYear(year) && i == 2)
			sum += 29;
		else if ((i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12))
			sum += 31;
		else if ((i == 4 || i == 6 || i == 9 || i == 11))
			sum += 30;
		else if (!judgeLeapYear(year) && i == 2)
			sum += 28;
	}
	
	sum = sum + day;

	return sum;
}

int main2()
{
	int year = 0;
	int month = 0;
	int day = 0;
	while (cin >> year >> month >> day)
	{
		if (judgeIsSucessInput(year,month,day) == 0)
			cout << judgeDate(year, month, day);
		else
			cout << -1;
	}
	system("pause");
	return 0;
}