#include <stdlib.h>
#include <stddef.h>
#include "main.h"


/**
 * *create_array - creates an array & initializes it with a specific char
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
	arr = (char *) malloc(size);
	if (arr == 0)
		return (NULL);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
