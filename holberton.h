#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printer(char *str);
int itoa(int n, int base);
int digitLen(int n);
char *rev_string(char *str);

#endif
