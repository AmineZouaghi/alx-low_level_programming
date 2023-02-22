#include "main.h"

/**
 * _isalpha - verify if the character is alphabetic or not
 * @c: a given char
 * Return: 1 (if c is is alpha) 0 (elsewhere)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
