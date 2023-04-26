#include "main.h"

/**
 * print_int - This function print all integer with _putchar
 * @n: The integer that we want to print
 * @len: Is the lenght of integer
 * Return: nothing
 */
void print_int(int n, int *len)
{
	int abs = n;
	char c;

	if (abs < 0)
	{
		c = '-';
		*len += 1;
		write(1, &c, 1);
		n = -1 * n;
	}

	if (n / 10 == 0)
	{
		c = '0' + n % 10;
		*len += 1;
		write(1, &c, 1);
	}
	else
	{
		print_int(n / 10, len);
		c = '0' + n % 10;
		*len += 1;
		write(1, &c, 1);
	}
}
