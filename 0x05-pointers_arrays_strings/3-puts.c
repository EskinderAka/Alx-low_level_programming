/*
 * File : 3-puts.c
 * By   : Eskinde Aka
 * Task : 3. I do not fear computers. I fear the lack of them
 */
#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
