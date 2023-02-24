#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: input (size of the triangle)
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;
		i = 1;
		while (i <= size)
		{
			for (k = size - i; k >= 1; k--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			i++;
			_putchar('\n');
		}
	}
}
