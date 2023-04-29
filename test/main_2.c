#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%lu", 1024UL);
	len2 = printf("%lu", 1024UL);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ %d -> %d.\n", len, len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
