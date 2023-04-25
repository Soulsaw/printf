#include "main.h"

/**
 * print_int - This function print all integer with _putchar
 * @n: The integer that we want to print
 * Return: nothing
 */
void print_int(int n)
{
	int abs = n;
	char c;

	if (abs < 0)
	{
		c = '-';
		write(1, &c, 1);
		n = -1 * n;
	}

	if (n / 10 == 0)
	{
		c = '0' + n % 10;
		write(1, &c, 1);
	}
	else
	{
		print_int(n / 10);
		c = '0' + n % 10;
		write(1, &c, 1);
	}
}
