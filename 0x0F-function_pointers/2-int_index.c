#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - searches for interger in an array
 *@array: the array
 *@size: number of elements in array
 *@cmp: pointer to the function
 *
 *Return: -1 if no elements matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size == 0 || array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
