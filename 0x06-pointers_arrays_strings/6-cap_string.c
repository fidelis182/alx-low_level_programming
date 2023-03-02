#include "main.h"

/**
 **cap_string - capitalizes all words of a string
 *@cap: character
 *
 *Return: cap
 */
char *cap_string(char *cap)
{
	int n = 0;
	int isspace(int cap);
	int toupper(int cap);

	while (cap[n] != '\0')
	{
		if (n == 0 || isspace(cap[n - 1]))
		{
			cap[n] = toupper(cap[n]);
		}
		n++;
	}
	return (cap);
}
