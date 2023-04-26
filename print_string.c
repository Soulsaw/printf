#include "main.h"

/**
 * print_string - This function print all string
 * @str: Is the string that we want to print
 * @len: The lenght of the function format
 */
void print_string(char *str, int *len)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		*len += 1;
		write(1, &(str[i]), 1);
		i++;
	}
}
