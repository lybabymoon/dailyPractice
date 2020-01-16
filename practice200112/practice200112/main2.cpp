#include <iostream>
using namespace std;

bool isLongPressedName(string name, string typed)
{
	int j = 0;
	int i = 0;
	while (i<name.size())
	{
		if (name[i] == typed[j])
		{
			++i;
			++j;
		}
		else if (name[i] != typed[j] && typed[j] == typed[j-1])
		{
			++j;
		}
		else
		{
			return false;
		}
	}

	return true;
}
int main()
{

	return 0; 
}