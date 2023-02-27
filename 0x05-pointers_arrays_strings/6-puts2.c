#include "main.h"

/**
 *puts2 - prints every other character of a string.
 *@str: input
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int length = 0;
	int n = 0;
	char *a = str;
	int i;

	while (*a != '\0')
	{
		a++;
		length++;
	}
	n = length - 1;
	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
