#include "main.h"

/**
 *swap_int - takes in two integer pointers and swaps their values
 *@a: integer to be swapped
 *@b: integer to be swapped
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
