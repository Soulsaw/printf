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

	len = _printf("%b", UINT_MAX);
	len2 = printf("11111111111111111111111111111111");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.%d -> %d\n", len, len2);
		fflush(stdout);
		return (1);
	}
	return (0);
}
