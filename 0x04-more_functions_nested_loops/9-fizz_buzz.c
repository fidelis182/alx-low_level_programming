#include <stdio.h>
#include "main.h"
/**
 *print_fizz_buzz - print numbers from 1 to 100
 *
 *Return: checks if the conditions are met
 */
void print_fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\t");
		}
		else
		{
			printf("%d\t", i);
		}
	}
}

/**
 *main - entry point
 *Return: always 0
 */
int main(void)
{
	print_fizz_buzz();
	return (0);
}
