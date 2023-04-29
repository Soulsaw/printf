#include "main.h"
/**
 * print_conversion_octal - function that execute
 * @choice: The character
 * @a: the incremente numnber
 * @ap: The variadic function
 * @b: The boolean
 * @len: The lenght of the string format
 */
void print_conversion_octal(char choice, int *a, va_list ap, int *b, int *len)
{
	long int n;

	switch (choice)
	{
		case 'o':
			n = va_arg(ap, long int);
			print_octal(n, len);
			*a += 1;
			*b = 1;
			break;
		default:
			break;
	}
}
