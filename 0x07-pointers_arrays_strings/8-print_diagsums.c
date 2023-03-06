#include "main.h"

/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: character
 *@size: character
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int suma = 0;
	int sumb = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		suma = suma + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumb += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", suma, sumb);
}
