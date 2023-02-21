#include "main.h"
/**
 * print_sign - check if int n is greater than or less than 0
 * @n: is the int to be checked
 * Return: 1 if n is greater than 0, -1 if n is less than 0, otherwise 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
