#include "main.h"
/**
 *function _abs - takes an integer argument 'a' and returns its absolute value
 *Return: return '-a' if 'a' is less than 0, otherwise 'a'
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
