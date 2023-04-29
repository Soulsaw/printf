#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void print_conversion_hexdecimal(char choice, int *a,
		va_list ap, int *b, int *len);
void print_conversion_octal(char choice, int *a,
		va_list ap, int *b, int *len);
void print_conversion_binary(char choice, int *a,
		va_list ap, int *b, int *len);
void print_conversion_int(char choice, int *a, va_list ap, int *b, int *len);
void print_conversion(char choice, int *a, va_list ap, int *b, int *len);
void print_binary_digit(long int n, int *len);
void print_decimal(long int n, int *len);
void print_hexdecimal(long int n, int *len, char choice);
void print_octal(long int n, int *len);
int _putchar(char c);
void print_string(char *str, int *len);
void print_int(long int n, int *len);
#endif /* MAIN_H */
