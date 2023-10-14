/*
 * File : 7-print_diagonal.c
 * By   : Eskinder Aka
 * Task : 7. I feel like I am diagonally parked in a parallel universe
 */
#include "main.h"
#include <stdio.h>

/*
 * print_diagonal - prints a diagonal
 * @n:parameter
 * Return : return nothing
 */

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0 ; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
