#include <stdio.h>
/**
 *main - entry point
 *Return: return 0
 */
int main(void)
{
	int n, b, c;

	for (n = 0; n < 9; n++)
	{
		for (b = n + 1; b < 10; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(n % 10 + '0');
				putchar(b % 10 + '0');
				putchar(c % 10 + '0');

				if (n == 8 && b == 9 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
