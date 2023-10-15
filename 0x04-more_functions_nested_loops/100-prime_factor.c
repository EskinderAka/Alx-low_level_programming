/*
 * File : 100-prime_factor.c
 * By   : Eskinder Aka
 * Task : 11
 */
#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int prim;

	prim = 3;
	while (prim < num / 2)
	{
		if ((num % prim) == 0)
		{
			if ((prim % 3) == 2)
				printf(",%lu ", prim);
		}

		prim + = 2;
	}

	putchar('\n');
	return (0);
}

