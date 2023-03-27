#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: a given string's pointer
 * @s2: a given string's pointer
 *
 * Return: the pointer of the new string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, p;
	char *ptr;

	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	k = j + i + 1;
	ptr = malloc(k);
	if (ptr == NULL)
		return (NULL);
	if ((i + j) == 0)
	{
		*ptr = '\0';
		return (ptr);
	}
	for (p = 0; p <= i; p++)
		*(ptr + p) = *(s1 + p);
	for (p = 0; p <= j; p++)
		*(ptr + i + p) = *(s2 + p);
	*(ptr + k) = '\0';
	return (ptr);
}
