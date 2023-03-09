#include "main.h"

int _sqrt(int n, int i);

/**
 *_sqrt_recursion -  returns the natural square root of a number.
 *@n: number
 *
 *Return: -1 for error
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - calculates the natural number
 *@n: number
 *@i: iterate number
 *
 *Return: natural number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
