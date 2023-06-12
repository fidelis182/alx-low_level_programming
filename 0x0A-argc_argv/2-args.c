#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: vector value
 *
 *Return: 0 always
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
