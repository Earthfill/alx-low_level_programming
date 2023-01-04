/*
 * File: 3-factorial.c
 * Auth: kingslee
*/

#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: factorial.
*/
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
