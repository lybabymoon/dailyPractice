#include <iostream>
using namespace std;
#include <vector>
int _leapYDs[] = { 0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int _nleapYDs[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int P[] = {0, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 1, 2 };
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

int commonYear(int year1, int month1, int day1, int year2, int month2, int day2)
{
	int sum = 0;
	if (month1 == month2)
	{
		for (int i = day1; i <= day2; i++)
		{
			sum += P[month1];
		}
		return sum;
	}
	if (isLeapYear(year1))
	{
		for (int i = day1; i <= _leapYDs[month1]; i++)
		{
			sum += P[month1];
		}
	}
	else
	{
		for (int i = day1; i <= _nleapYDs[month1]; i++)
		{
			sum += P[month1];
		}
	}
	
	month1++;
	while (month1 < month2)
	{
		if (isLeapYear(year1))
		{
			sum += _leapYDs[month1] * P[month1];
		}
		else
		{
			sum += _nleapYDs[month1] * P[month1];
		}
	}
	
	for (int i = 1; i <= day2; i++)
	{
		sum += P[month2];
	}
	
	return sum;
}

int notCommonYear(int year1, int month1, int day1, int year2, int month2, int day2)
{
	int sum = 0;
	//year1
	if (isLeapYear(year1))
	{
		for (int i = day1; i <= _leapYDs[month1]; i++)
		{
			sum += P[month1];
		}
	}
	else
	{
		for (int i = day1; i <= _nleapYDs[month1]; i++)
		{
			sum += P[month1];
		}
	}
	month1++;
	for (month1; month1 < 13; month1++)
	{
		if (isLeapYear(year1))
		{
			sum += _leapYDs[month1] * P[month1];
		}
		else
		{
			sum += _nleapYDs[month1] * P[month1];
		}
	}
	//ÖÐ¼ä
	int year = year1 + 1;
	
	while (year < year2)
	{
		int month = 1;
		while (month < 13)
		{
			if (isLeapYear(year))
			{
				sum += _leapYDs[month] * P[month];
			}
			else
			{
				sum += _nleapYDs[month] * P[month];
			}
			++month;
		}
		++year;
	}

	//year2
	if (isLeapYear(year2))
	{
		for (int i = 1; i < month2; i++)
		{
			sum += _leapYDs[i] * P[i];
		}
	}
	else
	{
		for (int i = 1; i < month2; i++)
		{
			sum += _nleapYDs[i] * P[i];
		}
	}
	
	for (int i = 1; i <= day2; i++)
	{
		sum += P[month2];
	}
	return sum;
}

int main1()
{
	int year1, month1, day1;
	int year2, month2, day2;
	while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
	{
		int sum;
		if (year1 == year2)
		{
			sum = commonYear(year1, month1, day1, year2, month2, day2);
			cout << sum << endl;
		}
		else
		{
			sum = notCommonYear(year1, month1, day1, year2, month2, day2);
			cout << sum << endl;
		}
	}
	return 0;
}

