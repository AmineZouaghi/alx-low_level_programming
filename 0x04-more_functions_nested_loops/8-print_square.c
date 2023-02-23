#include "main.h"

/**
 * print_square - print a square shape using "#" and ending with a new line.
 * @size: input, the size of the square.
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
