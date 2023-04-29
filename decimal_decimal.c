#include "main.h"


/**
 * print_decimal - This function print a integer to hexadecimal
 * @n: The integer
 * @len: The lenght of the _printf
 * Return: nothing
 */
void print_decimal(long int n, int *len)
{
	char c;

	if (n / 10 == 0)
	{
		*len += 1;
		c = '0' + (n % 10);
		write(1, &c, 1);
	}
	else
	{
		print_decimal((n / 10), len);
		*len += 1;
		c = '0' + (n % 10);
		write(1, &c, 1);
	}
}
