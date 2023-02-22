#include "main.h"

/**
 * print_sign - verifies if a number is positive, negative or null
 *
 * @n: a given int
 *
 * Return: 1 (n positive), 0 (n null) or -1 (n negative)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(-1);
		return ('-');
	}
	else if (n > 0)
	{
		_putchar(1);
		return ('+');
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
