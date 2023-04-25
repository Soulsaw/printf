#include "main.h"

/**
 * print_string - This function print all string
 * @str: Is the string that we want to print
 */
void print_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &(str[i]), 1);
		i++;
	}
}
