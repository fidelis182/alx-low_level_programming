#include "main.h"
/**
 * get_endianness - gets the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *j;

	i = 1;
	j = (char *) &i;

	return ((int)*j);
}
