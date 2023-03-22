#include "main.h"

/**
 **leet - encodes a string into 1337
 *@let: character
 *
 *Return: let
 */
char *leet(char *let)
{
	char letter[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char replace[5] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; let[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (let[i] == letter[j])
				let[i] = replace[j % 5];
		}
	}
	return (let);
}
