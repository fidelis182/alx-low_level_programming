#include "main.h"

/**
 *_calloc- allocates memory of an array
 *@nmemb: number of elements
 *@size: size of the element
 *
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *str;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return NULL;
	}
	memset(str, 0, nmemb *size);
	return (str);
}
