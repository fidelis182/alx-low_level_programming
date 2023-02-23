#include "main.h"

/**
 *print_line - prints a stright line
 *@n: number of times the char is to be printed
 *
 * Return: 0 for success
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
