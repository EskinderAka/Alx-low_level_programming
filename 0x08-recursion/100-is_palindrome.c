/*
 * File : 100-is_palindrome.c
 */
#include "main.h"
/**
 * palindfun - obtains length of a
 * @a: string
 * @l: integer to count length
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindfun(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palindfun(a + 1, l + 1));
}
/**
 * palindcomp - compares string vs string reverse
 * @a: string
 * @l: length
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindcomp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindcomp(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindfun(s, 0);
	return (palindcomp(s, l));
}
