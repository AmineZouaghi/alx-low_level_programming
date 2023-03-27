#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: the width of the array (given)
 * @height: the height of the array (given)
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **a = malloc(height * sizeof(int*));

	if ((width == 0) || (height == 0))
		return(NULL);
	for (i = 0; i <= height; i++) 
		a[i] = malloc(width * sizeof(int));
	for (i = 0; i <= height; i++)
		for (j = 0; j <= width;j++)
			a[i][j] = 0;
	return (a)
}
