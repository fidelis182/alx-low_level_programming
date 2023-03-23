#include "variadic_functions.h"

/**
 *sum_them_all - prints sum all it`s parameters
 *@n: first variable
 *@...: ellipsis
 *
 *Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	unsigned int i;

	int add = 0;

	for (i = 0; i < n; i++)
	{
		add += va_arg(ap, int);
	}
	va_end(ap);
	return (add);
}
