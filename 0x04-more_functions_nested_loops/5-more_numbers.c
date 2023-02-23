#include "main.h"

/**
 * more_numbers - writes the character void to stdout
 *
 * Return: no return value 
 */
void more_numbers(void)
{
	int n, a;

	for (n = 0; n < 10;n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar('0' +a / 10);
			}
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
