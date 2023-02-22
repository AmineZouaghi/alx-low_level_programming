#include "main.h"

/*
 * @c:will be printed
 *
 *putchar return: void
 */

int _putchar(char c);

/**
 * print_alphabet - print alphabet in lower case
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
