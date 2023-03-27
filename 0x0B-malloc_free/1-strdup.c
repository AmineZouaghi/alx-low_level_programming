#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *
 * @*str: a given pointer
 *
 * Return: char
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *copy_str;

	if (!str)
		return (NULL);
	while (*(str + i))
		i++;
	i++;
	copy_str = malloc(i);
	if (copy_str == NULL)
		return(NULL);
	for (j = 0; j < i; j++)
		copy_str[j] = str[j];
	return (copy_str);
}
