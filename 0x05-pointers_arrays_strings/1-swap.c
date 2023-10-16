/*
 * File : 1-swap.c
 * By   : Eskinder Aka
 * Task : 1. Don't swap horses in crossing a stream
 */
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
