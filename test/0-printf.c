#include "main.h"
/**
 * execute - description
 * Return: nothing
 */
void execute(char format, int *i, va_list ap, int *b, int *len)
{
	print_conversion(format, i, ap, b, len);
	print_conversion_int(format, i, ap, b, len);
	print_conversion_binary(format, i, ap, b, len);
	print_conversion_hexdecimal(format, i, ap, b, len);
	print_conversion_octal(format, i, ap, b, len);
}

/**
 * _printf - This function produces output according to the format
 * @format: This is the string we want to prints
 * Return: The number of character printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0, i = 0, b = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if ((format[i + 1] == 'l' && format[i + 2] != '\0') ||
					format[i + 1] != '\0')
			{
				if (format[i + 1] == 'l')
				{
					i++;
				}
				execute(format[i + 1], &i, ap, &b, &len);
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
