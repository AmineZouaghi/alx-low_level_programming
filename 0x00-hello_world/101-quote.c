#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
  *main - Entry point
  *
  * Return: Always 1 (Success)
  */
int main(void)
{
	int x;

	x = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", x);
	return (1);
}
