#include "main.h"

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
				print_conversion_int(format[i + 1], &i, ap, &b, &len);
				print_conversion_binary(format[i + 1], &i, ap, &b, &len);
				print_conversion_hexdecimal(format[i + 1], &i, ap, &b, &len);
				print_conversion_octal(format[i + 1], &i, ap, &b, &len);
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
