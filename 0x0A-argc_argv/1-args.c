#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: argument
 *@argv: vector value argurment
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	printf("argc = %d\n", argc);
	for (n = 0; n < argc; n++)
	{
		printf("argv[%d] = %s\n", n, argv[n]);
	}
	return (0);
}
