#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - prints sum all it`s parameters
 *@n: first variable
 *@...: ellipsis
 *
 *Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
