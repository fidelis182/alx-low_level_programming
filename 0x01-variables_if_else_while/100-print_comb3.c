#include <stdio.h>
/**
 *main -entry point
 *Return: return 0
 */
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		putchar(n / 9 + '0');
		putchar(n % 9 + '0');
		if (n < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
