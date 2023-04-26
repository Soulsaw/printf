#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void print_binary_digit(long int n, int *len);
int _putchar(char c);
void print_string(char *str, int *len);
void print_int(long int n, int *len);
#endif /* MAIN_H */
