#include "main.h"
/**
 *times_table - prints the 9 times table, starrting from 0
 */
void times_table(void)
{
	int a, b, table;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			table = a * b;
			if (b == 0)
			{
				_putchar(table + '0');
			}
			if (table < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(table + '0');
			}
			else if (table >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((table / 10) + '0');
				_putchar((table % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
