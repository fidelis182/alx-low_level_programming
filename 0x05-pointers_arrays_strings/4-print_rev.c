#include "main.h"

/**
 *print_rev - prints a string, in reverse, followed by a new line.
 *@s: string to be printed
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int n, length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
