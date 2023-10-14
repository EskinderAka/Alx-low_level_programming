/*
 * File : 7-print_diagonal.c
 * By   : Eskinder Aka
 * Task : 7. I feel like I am diagonally parked in a parallel universe
 */

#include "main.h"
#include <stdio.h>

/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/

void print_diagonal(int n)
{
	int prior, i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		prior = i;
		while (prior > 0)
		{
			_putchar(32);
			prior--;
		}
	}
	_putchar('\\');
	_putchar('\\');
}
