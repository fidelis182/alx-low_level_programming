#include "main.h"

/**
 *functio _abs- Returns the absolute value of the given integer.
 *
 * @a The integer to take the absolute value of.
 * @return The absolute value of a.
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
