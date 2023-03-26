#include "main.h"

/**
 * _sqrt_recursion - Returns the sqrt of a given integer
 *
 * @n: the given integer
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Returns the sqrt of a given integer
 *
 * @n: the given integer
 * @val:the value to test with
 *
 * Return: int
 */

int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val > n)
		return (-1);
	else
		return (_sqrt(n, val + 1));
}
