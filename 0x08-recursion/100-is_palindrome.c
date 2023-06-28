#include "main.h"
/**
 * strg_len - checks string
 * @l: length
 * @strg: string
 * @i: increment
 * Return: 1 if palindrome | 0 if not
 */
int strg_len(char *strg, int l, int i)
{
	if (i < l && strg[i] == strg[l])
		return (strg_len(strg, l - 1, i + 1));
	if (strg[i] != strg[l])
		return (0);
	return (1);
}

/**
 * _strglen_recursion - length of a string
 * @s: string
 * Return: an int
 */
int _strglen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strglen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - is it a palindrome
 * @s: the string to check
 * Return: 1 if palindrome | 2 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strglen_recursion(s) - 1;

	return (strg_len(s, length, i));
}
