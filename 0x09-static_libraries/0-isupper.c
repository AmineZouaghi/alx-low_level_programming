#include "main.h"

/**
 * _isupper - Verifies if a character is uppercase
 *@c: the character that will be tested
 *
 * Return: 1 (if c is uppercase)
 *         0 (elsewhere)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
