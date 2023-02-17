#include<stdio.h>
/**
 *main-prints value of n
 *
 *printf: function prompts user to entern
 *scanf:takes the user input of n
 *Return: return 0
 */
int main(void)
{
	int n;
	scanf("%d", &n);

	if (n > 0)
	{
		printf("98 is positive");
	}
	else if (n < 0)
	{ 
		printf("-98 is negative");
	}
	else
	{
		printf("0 is zero");
	}
	return (0);
}
