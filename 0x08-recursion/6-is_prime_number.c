#include "main.h"

/**
 * is_prime_number - verifies if a function is prime number
 *
 * @n: the integer to verify
 *
 * Return: 1 if n is prime, 0 elsewhere
 */
int is_prime_number(int n)
{
	return (verif(n, 2));
}

/**
 * verif - verifies if a function is prime number
 *
 * @n: the integer to verify
 * @i:integer to test with
 *
 * Return: 1 if n is prime, 0 elsewhere
 */

int verif(int n, int i)
{
	if (i == n)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (verif(n, i + 1));
}
