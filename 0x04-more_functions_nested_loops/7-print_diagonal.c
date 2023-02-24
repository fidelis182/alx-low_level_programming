#include "main.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: number of times the char is to be printed
 *
 * Return: 0 for success
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
				_putchar('\\');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
