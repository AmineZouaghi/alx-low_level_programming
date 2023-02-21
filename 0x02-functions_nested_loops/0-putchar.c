#include "main.h"
#include <unistd.h>

/**
 * __putchar - writes the character c to stdout
 * c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int __putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		__putchar(x[i]);
	__putchar('\n');
	return (0);
}
