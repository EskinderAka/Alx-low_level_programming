/*
 * File : 2-strlen.c
 * By   : Eskinder Aka
 * Task : 2. This report, by its very length
 */
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
