

#include "main.h"

/**
 *_atoi - convert string to integer
 *@s: string
 *
 *Return: assign * rslt
 */
int _atoi(char *s)
{
	int a = 0;
	int assign = 1;
	int rslt = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-')
		{
			assign = -1;
		}
		else if (s[a] == '+')
		{
			assign = 1;
		}
		else if (s[a] >= '0' && s[a] <= '9')
		{
			rslt = rslt * 10 + (s[a] - '0');
		}
		else if (rslt > 0)
		{
			break;
		}
		a++;
	}
	return (assign * rslt);
}
