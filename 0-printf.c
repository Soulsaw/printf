#include "main.h"

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
		if (format[i] == '%' && format[i + 1] == 's')
		{
			print_string(va_arg(ap, char*));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			putchar(va_arg(ap, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			putchar('%');
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			print_int(va_arg(ap, int));
			i++;
		}
		else
		{
			putchar(format[i]);
		}
	}
	va_end(ap);

	return (len);
}
