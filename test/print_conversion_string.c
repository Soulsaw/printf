#include "main.h"
/**
 * print_conversion - function that execute
 * @choice: The character
 * @a: the incremente numnber
 * @ap: The variadic function
 * @b: The boolean
 * @len: The lenght of the string format
 */
void print_conversion(char choice, int *a, va_list ap, int *b, int *len)
{
	char c, *str;

	switch (choice)
	{
		case 'c':
			c = (char) va_arg(ap, int);
			*len += 1;
			write(1, &c, 1);
			*a += 1;
			*b = 1;
			break;
		case 's':
			str = va_arg(ap, char*);
			if (str == NULL)
			{
				str = "(null)";
			}
			print_string(str, len);
			*a += 1;
			*b = 1;
			break;
		case '%':
			c = '%';
			*len += 1;
			write(1, &c, 1);
			*a += 1;
			*b = 1;
			c = '\0';
			break;
		default:
			break;
	}
}

