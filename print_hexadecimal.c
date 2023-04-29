#include "main.h"
/**
 * print_conversion_hexdecimal - function that execute
 * @choice: The character
 * @a: the incremente numnber
 * @ap: The variadic function
 * @b: The boolean
 * @len: The lenght of the string format
 */
void print_conversion_hexdecimal(char choice, int *a,
		va_list ap, int *b, int *len)
{
	long int n;

	switch (choice)
	{
		case 'x':
			n = va_arg(ap, long int);
			print_hexdecimal(n, len, 'x');
			*a += 1;
			*b = 1;
			break;
		case 'X':
			n = va_arg(ap, long int);
			print_hexdecimal(n, len, 'X');
			*a += 1;
			*b = 1;
			break;
		default:
			break;
	}
}
