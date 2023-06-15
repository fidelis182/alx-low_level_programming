#include "main.h"

/**
 **_realloc -  reallocates a memory block
 *@ptr: is a pointer to the memory
 *@old_size:  is the size, in bytes
 *@new_size: is the new size of the new memory
 *
 *Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (ptr != NULL)
		clone = ptr;
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + 1) = clone[i];
	}
	free(ptr);
	return (relloc);
}
