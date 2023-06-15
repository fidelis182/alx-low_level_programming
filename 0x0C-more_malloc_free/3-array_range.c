#include "main.h"

/**
 **array_range - creates an array of integers.
 *@max: highest value range
 *@min: smallest value range
 *
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int c, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (c = 0; min <= max; c++)
		ptr[c] = min++;
	return (ptr);
}
