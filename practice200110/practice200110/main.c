#include <stdio.h>
#include <stdlib.h>
#include <cstdbool>

bool canConstruct(char * ransomNote, char * magazine)
{
	int len1 = strlen(ransomNote);
	int len2 = strlen(magazine);
	int num[26] = { 0 };
	for (int i = 0; i < len2; i++)
	{
		num[magazine[i] - 'a']++;
	}

	for (int j = 0; j < len1; j++)
	{
		num[ransomNote[j] - 'a']--;
		if (num[ransomNote[j] - 'a'] < 0)
		{
			return false;
		}
	}

	return true;
}
int main1()
{
	char *a = "aa";
	char *b = "ab";
	canConstruct(a, b);
	return 0;
}