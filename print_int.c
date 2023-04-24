#include "main.h"

/**
 * print_int - This function print all integer with _putchar
 * @n: The integer that we want to print
 * Return: nothing
 */
void print_int(int n)
{
	int abs = n;

	if (abs < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	if (n / 10 == 0)
	{
		_putchar('0' + (n % 10));
	}
	else
	{
		print_int(n / 10);
		_putchar('0' + (n % 10));
	}
}
