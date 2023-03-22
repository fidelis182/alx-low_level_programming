#include "main.h"

/**
 *print_array - prints n elements of an array of integers
 *@a: array name
 *@n: is the number of elements of the array
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		_putchar( a[b]);
	}
	if (b == (n - 1))
	{
		_putchar( a);
	}
	_putchar('\n');
}
