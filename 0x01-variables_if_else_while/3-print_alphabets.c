#include <stdio.h>
/**
 *main-entry point
 *Return: returns 0 
 *
 */
int main()
{
	char lowercase ='a';
	char uppercase ='A';

	while(lowercase <= 'z' )
	{
		putchar(lowercase);
		lowercase=lowercase+1;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	return (0);
}
