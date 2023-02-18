#include <stdio.h>
/**
 *main-entry point
 *Return: return 0
 */
int main(void)
{
	int e;
	long int b;
	long long int k;
	char c;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long ) sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long ) sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long ) sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long ) sizeof(b));
	printf("Size of float: %lu byte(s)\n", (unsigned long ) sizeof(f));
	return (0);
}
