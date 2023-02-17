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

	printf("enter n,\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf("is positive\n");
	}
	else if (n==0)
	{ 
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
