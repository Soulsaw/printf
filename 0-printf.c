#include "main.h"

/**
 * print_conversion - function that execute
 * @choice: The character
 * @a: the incremente numnber
 * @ap: The variadic function
 */
void print_conversion(char choice, int a, va_list ap)
{
	char c;

	switch (choice)
	{
		case 'c':
			c = (char) va_arg(ap, int);
			write(1, &c, 1);
			a++;
			break;
		case 's':
			print_string(va_arg(ap, char*));
			a++;
			break;
		case '%':
			c = '%';
			write(1, &c, 1);
			a++;
			break;
		default:
			break;
	}
}

/**
 * _printf - This function produces output according to the format
 * @format: This is the string we want to prints
 * Return: The number of character printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0, i;

	if (format == NULL)
	{
		return (0);
	}
	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		if (format[i] == '%')
		{
			print_conversion(format[i + 1], i, ap);
		}
		else
		{
			write(1, &(format[i]), 1);
		}
	}
	va_end(ap);

	return (len);
}
