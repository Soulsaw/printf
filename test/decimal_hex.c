#include "main.h"


/**
 * print_hexdecimal - This function print a integer to hexadecimal
 * @n: The integer
 * @len: The lenght of the _printf
 * @choice: The choice of printing
 * Return: nothing
 */
void print_hexdecimal(long int n, int *len, char choice)
{
	char c, *str;

	if (choice == 'x')
	{
		str = "0123456789abcdef";
	}
	if (choice == 'X')
	{
		str = "0123456789ABCDEF";
	}

	if (n / 16 == 0)
	{
		*len += 1;
		c = str[(n % 16)];
		write(1, &c, 1);
	}
	else
	{
		print_hexdecimal((n / 16), len, choice);
		*len += 1;
		c = str[(n % 16)];
		write(1, &c, 1);
	}
}
