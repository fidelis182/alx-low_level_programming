#include "main.h"
/**
 * print_most_numbers - writes the character void to stdout
 *
 * Return: On success 0.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a + '0');
	}
	_putchar('\n');
}
