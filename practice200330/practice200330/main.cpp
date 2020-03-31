#include <iostream>
using namespace std;
#include <vector>
bool isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}
	else if (year % 100 == 0 && year % 400 == 0)
	{
		return true;
	}

	return false;
}

int getDay(int month,int year,int firsrW)
{
	int firstMW = 0;
	int days = 0;
	if (isLeapYear(year))
	{
		int count = 1;
		while (count < month)
		{
			if (count == 1 || count == 3 || count == 5 || count == 8 || count == 10 || count == 12)
			{
				days += 31;
			}
			else if (count == 2)
			{
				days += 29;
			}
			else
			{
				days += 30;
			}

			count++;
		}
	}
	else
	{
		int count = 1;
		while (count < month)
		{
			if (count == 1 || count == 3 || count == 5 || count == 8 || count == 10 || count == 12)
			{
				days += 31;
			}
			else if (count == 2)
			{
				days += 28;
			}
			else
			{
				days += 30;
			}

			count++;
		}
	}
	firstMW = (days % 7 + firsrW) % 7;

	return firstMW;
}

int main()
{
	int year;
	
	while (cin >> year)
	{
		int days = 0;
		int day = 0;
		int _firstW = 0;
		days = 365 * (year - 2000) + ((year - 2000 - 1) / 4) + 1;
	/*	if (year - 2000 <= 4)
		{
			days += 1;
		}*/
		if (year == 2000)
		{
			_firstW = 6;
		}
		else
		{
			_firstW = (days % 7 + 6) % 7;
		}
		
		cout << year << "-01-01" << endl;
		//马丁
		if (_firstW != 1)
		{
			day = 7 - _firstW + 2 * 7 + 1 + 1;
		}
		else
		{
			day = 2 * 7 + 1;
		}
		if (day >= 10)
		{
			cout << year << "-01" << "-" << day << endl;
		}
		else
		{
			cout << year << "-01" << "-0" << day << endl;
		}
		
		//总统日
		int _firstWM = getDay(2, year, _firstW);
		if (_firstWM != 1)
		{
			day = 7 - _firstW + 2 * 7 + 1 + 1 - 3;
		}
		else
		{
			day = 2 * 7 + 1;
		}
		if (day >= 10)
		{
			cout << year << "-02" << "-" << day << endl;
		}
		else
		{
			cout << year << "-02" << "-0" << day << endl;
		}

		//阵亡将士纪念日
		_firstWM = getDay(5, year, _firstW);
		if (_firstWM != 1)
		{
			day = 7 - _firstW + 1;
		}
		else
		{
			day = 1;
		}
		while (day + 7 <= 31)
		{
			day = day + 7;
		}
		if (day >= 10)
		{
			cout << year << "-05" << "-" << day << endl;
		}
		else
		{
			cout << year << "-05" << "-0" << day << endl;
		}

		//美国国庆
		cout << year << "-07-04" << endl;

		//劳动节
		_firstWM = getDay(2, year, _firstW);
		if (_firstWM != 1)
		{
			day = 7 - _firstW + 1 + 1 - 5;
		}
		else
		{
			day = 1;
		}

		if (day >= 10)
		{
			cout << year << "-09" << "-" << day << endl;
		}
		else
		{
			cout << year << "-09" << "-0" << day << endl;
		}

		//感恩节
		_firstWM = getDay(2, year, _firstW);
		if (_firstWM != 1)
		{
			day = 7 - _firstW + 7 * 3 + 1 + 1;
		}
		else
		{
			day = 4;
		}

		if (day >= 10)
		{
			cout << year << "-11" << "-" << day << endl;
		}
		else
		{
			cout << year << "-11" << "-0" << day << endl;
		}
		//圣诞节
		cout << year << "-12-25" << endl;


		cout << endl;
	}
	return 0;
}