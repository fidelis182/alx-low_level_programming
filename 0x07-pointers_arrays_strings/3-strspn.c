#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *@s: character
 *@accept: character
 *
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
