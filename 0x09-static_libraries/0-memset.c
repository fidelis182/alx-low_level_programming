#include "main.h"

/**
 **_memset - fills memeory with a constant byte
 *@s: character
 *@b: character
 *@n: unsigned integer
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
