#include "main.h"
/**
 *User defined function print_alphabet that has void
 *parameters. The function prints void since its data type is void
 *return void.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
