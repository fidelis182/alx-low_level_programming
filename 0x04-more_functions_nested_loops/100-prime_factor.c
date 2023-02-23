#include <stdio.h>
/**
 *main -entry ponit
 *
 *Return: always 0 
 *
 */
int main(void)
{
	long a = 612852475143;
	long int  b = 1;
	long int n;

	while (a % 2 == 0)
	{
		b = 2;
		a /= 2;
	}
	for (n = 3; n <= a; n += 2)
	{
		while (a % n == 0)
		{
			b = n;
			a /= n;
		}
	}
	printf("%lld\n", b);
	return (0);
}
