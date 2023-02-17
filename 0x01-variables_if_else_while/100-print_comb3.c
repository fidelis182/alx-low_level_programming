#include <stdio.h>
/**
 *main -entry point
 *Retunr: return 0
 */
int main (void)
{
	int n;

	for (n = 1; n < 100; n++)
	{
		putchar(n/10 + '0');
		putchar(n%10 + '0');
		if (n < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
