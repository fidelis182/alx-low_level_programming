#include "main.h"

/**
 * _strlen - prints the length of the array
 * @s: a pointer the character we want to get it`s length
 *
 * Return: length 'a'
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}
