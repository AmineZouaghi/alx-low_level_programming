#include "main.h"

/**
 * _isdigit - Verifies if a char is digit
 * @c: the integer that will be tested
 *
 * Return: 1 (if c is digit)
 *         2 (otherwise)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
