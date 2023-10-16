/*
 * File : 3-puts.c
 * By   : Eskinde Aka
 * Task : 3. I do not fear computers. I fear the lack of them
 */

#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
