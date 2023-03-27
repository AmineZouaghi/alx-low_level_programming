#include <stdlib.h>
#include <stddef.h>
#include "main.h"


/**
 * *create_array - creates an array of chars, and initializes it with a specific char.
 *
 * @size: unsigned given int
 * @c: a given char
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	       return (NULL);
	else
	{
		arr =(char *) malloc(size);
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}
		return(arr);
	}
}
