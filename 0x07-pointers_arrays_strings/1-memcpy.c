#include "main.h"

/**
 **_memcpy - copies memory area
 *@dest: character
 *@src: character
 *@n: number of bytes
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int a = n;

	for ( ; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
