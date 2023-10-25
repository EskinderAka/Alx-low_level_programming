/*
 * File : 2-strlen_recursion.c
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
	return (strlen(s));
}
return (0);
}
