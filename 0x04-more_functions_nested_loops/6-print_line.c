/*
 * File : 6-print_line.c
 * By   : Eskinder Aka
 * Task : 6. The shortest distance between two points is a straight line
 */

#include "main.h"
#include <stdio.h>

/**
*print_line - prints a straight line
*@n:parameter
*Return:returns nothing
*/

void print_line(int n)
{
	while (!(n <= 0))
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
