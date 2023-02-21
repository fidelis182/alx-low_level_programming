#include "main.h"
/**
 *isalpha - writes the parameter c to stdout
 *@c. functio returns output of type int
 *
 *Return - returns 1 if c is a letter otherwise 0
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
