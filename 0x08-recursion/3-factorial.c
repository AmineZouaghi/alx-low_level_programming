#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * @n: the given number
 *
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
