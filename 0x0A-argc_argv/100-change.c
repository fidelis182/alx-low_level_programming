#include "main.h"

/**
 *main - entry point.
 *@argc: arguement count
 *@argv: vector value
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int a, b, i, c = 0;

	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
			printf("%d\n", c);
		if (atoi(argv[1]))
		{
			a = atoi(argv[1]);
			for (i = 0; i < 5; i++)
			{
				if (a >= cents[i])
				{
					b = a / cents[i];
					a %= cents[i];
					c += b;
				}
			}
		}
	}
	if (argc < 2)
		printf("Error\n");
	if (c)
		printf("%d\n", c);
	return (0);
}
