#include "main.h"

/**
 **string_toupper - changes all the lowercase letters to uppercase
 *@c: character
 *
 *Return: c
 */
char *string_toupper(char *c)
{
	int a = 0;

	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
		{
			c[a] = c[a] - ('a' - 'A');
		}
		a++;
	}
	return (c);
}
