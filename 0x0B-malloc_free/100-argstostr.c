#include "main.h"

/**
 **argstostr -  concatenates all the arguments of your program.
 *@ac: argurment
 *@av: argument
 *
 *Return: new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = (char *) malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}
	return (str);
}
