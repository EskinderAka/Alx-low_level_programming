/*
 * File : 1-isdigit.c
 * By   : Eskinder Aka
 * Task : 1.isdigit
 */
#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 *@c : variable
 * Return: 0 or 1 .
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
