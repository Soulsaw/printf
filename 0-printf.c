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

/**
 * _printf - This function produces output according to the format
 * @format: This is the string we want to prints
 * Return: The number of character printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0, i, b = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				print_conversion(format[i + 1], &i, ap, &b, &len);
			}
			else
			{
				len--;
			}
			if (b == 0 && format[i + 1] != '\0')
			{
				len++;
				write(1, &(format[i]), 1);
			}
		}
		else
		{
			len++;
			write(1, &(format[i]), 1);
		}
		i++;
	}
	va_end(ap);
	return (len);
}
