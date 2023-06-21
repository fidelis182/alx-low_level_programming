#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - adds two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: substraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - gets the reminder two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: reminder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
