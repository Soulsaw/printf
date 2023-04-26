#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_string(char *str, int *len);
void print_int(int n);
#endif /* MAIN_H */
