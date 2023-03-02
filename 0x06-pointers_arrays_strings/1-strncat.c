#include "main.h"

/**
 **_strncat - concatenates two strings
 *@dest: character
 *@src: character
 *@n: number of bytes
 *
 *Return: dest:
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int ptr = strlen(dest);

	while (i < n && src[i] != '\0')
	{
		dest[ptr + i] = src[i];
		i++;
	}
	dest[ptr + i] = '\0';
	return (dest);
}
