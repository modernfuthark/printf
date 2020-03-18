#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int format_switch(const char *spec, ...);
int format_switch2(const char *spec, ...);
int printer(char *str);
int itoa(int n, int base);
int digitLen(int n);
char *rev_string(char *str);
char *_strdup(char *str);

#endif
