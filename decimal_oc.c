#include "main.h"


/**
 * print_octal - This function print a integer to hexadecimal
 * @n: The integer
 * @len: The lenght of the _printf
 * Return: nothing
 */
void print_octal(long int n, int *len)
{
	char c;

	if (n / 8 == 0)
	{
		*len += 1;
		c = '0' + (n % 8);
		write(1, &c, 1);
	}
	else
	{
		print_octal((n / 8), len);
		*len += 1;
		c = '0' + (n % 8);
		write(1, &c, 1);
	}
}
