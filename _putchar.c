#include "main.h"
/**
 * _putchar - This function print all character
 * @c: The character that we want to print
 * Return: The statu
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
