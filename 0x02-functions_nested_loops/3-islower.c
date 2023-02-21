#include "main.h"
/**
 *islower - writes the character c to stdout
 *@c. functio returns output of type int
 *
 *Return - returns 1 when c is lowercase
 *Return: return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else 
		return 0;
}
