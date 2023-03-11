#include "main.h"

/**
 *_atoi - converts string into integer
 *@s: string to be converted
 *
 *Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0, d = 0, n = 0, f = 0, len = 0, digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
/**
 *main - entry point
 *@argc: number of arguments
 *@argv: vector value
 *
 *Return: 1 error 0 success
 */
int main(int argc, char *argv[])
{
	int results, a, b;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	results = a * b;

	printf("%d\n", results);
	return (0);
}
