#include "main.h"

/**
 * print_binary_digit - This function print a integer to binary
 * @n: The integer
 * @len: The lenght of the _printf
 * Return: nothing
 */
void print_binary_digit(long int n, int *len)
{
	char c;

	if (n / 2 == 0)
	{
		*len += 1;
		c = '0' + (n % 2);
		write(1, &c, 1);
	}
	else
	{
		print_binary_digit((n / 2), len);
		*len += 1;
		c = '0' + (n % 2);
		write(1, &c, 1);
	}
}
