#include "main.h"
/**
 *user defined function print_alphabet_x10 takea void arguments
 *No return value sinc the return type is void
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}
		_putchar('\n');
	}
}
