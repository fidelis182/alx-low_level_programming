#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - prints array elements
 *@array: array
 *@size: size of the array
 *@action: pointer
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
