#include "main.h"

int check_prime(int n, int i);

/**
 *is_prime_number - checks if a number is prime number
 *@n: number to be checked
 *
 *Return: prime number
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 *check_prime - checks if number is prime number
 *@n: number to checked
 *@i: iteration character
 *
 *Return: prime number
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
