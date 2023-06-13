#include "main.h"

/**
 **str_concat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *
 *Return: new string
 */
char *str_concat(char *s1, char *s2)
{
	int count = strlen(s1) + strlen(s2) + 1;
	char *ptr = (char *) malloc(count * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	strcpy(ptr, s1);
	strcat(ptr, s2);
	ptr[count - 1] = '\0';
	return (ptr);
}
