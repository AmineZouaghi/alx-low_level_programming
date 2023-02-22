#include "main.h"

/**
 * _islower - tests if a char is lowercase
 *
 * Return: 1 (success) or 0 (failure)
 *
 * @c:  given char
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
