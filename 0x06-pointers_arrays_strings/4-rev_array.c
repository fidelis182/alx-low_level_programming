#include "main.h"

/**
 *reverse_array - reverse the content of an array integer
 *@a: character
 *@n: number of elements in the array
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int count, i, p;

	for (count = 0, i = n - 1; count < i; count++, i--)
	{
		p = a[count];
		a[count] = a[i];
		a[i] = p;
	}
}
