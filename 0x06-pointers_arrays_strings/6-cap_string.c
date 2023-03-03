#include "main.h"

/**
 **cap_string - capitalizes all words of a string
 *@cap: character
 *
 *Return: cap
 */
char *cap_string(char *cap)
{
	char punctuation[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (i == 0 && (cap[i] >= 97 && cap[i] <= 122))
			cap[i] = cap[i] - 32;
		for (j = 0; j < 13; j++)
		{
			if (cap[i] == punctuation[j])
			{
				if (cap[i + 1] >= 97 && cap[i + 1] < 122)
				cap[i + 1] = cap[i + 1]
				- 32;
			}
			else
				continue;
		}
	}
	return (cap);
}
