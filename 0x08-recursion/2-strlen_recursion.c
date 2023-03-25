#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 *
 * @s: given pointer
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = i + _strlen_recursion(s + 1) + 1;
	}
		return (i);
}
