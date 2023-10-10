/*
 * File : 102-fibonacci.c
 * By   : Eskinder aka
 */
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int count, x, y, sum = 0;

	x = 0;
	y = 1;
	for (count = 0; count < 50; count++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf("%lu", sum);
		printf(",");
	}

	return (0);
}
