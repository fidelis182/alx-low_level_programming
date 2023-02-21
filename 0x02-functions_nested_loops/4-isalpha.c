#include "main.h"
/**
 *islower - writes the character c to stdout
 *@c. functio returns output of type int
 *
 *Return - returns 1 when c is lowercase or uppercase
 *Return: return 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
