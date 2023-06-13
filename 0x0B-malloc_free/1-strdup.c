#include "main.h"

/**
 **_strdup - returns a pointer to a newly allocated space in memory
 *@str: old string
 *
 *Return: new
 */
char *_strdup(char *str)
{
	size_t a = strlen(str) + 1;
	char *new = malloc(a);

	if (str == NULL)
	{
		return (NULL);
	}
	if (new == NULL)
	{
		return (NULL);
	}
	memcpy(new, str, a);
	return (new);
}
