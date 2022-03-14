#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int str_len(char *str);
int f_select(const char *format, char *fs, char *s, int sz, va_list args, int z);
int print_char(const char *format, char *f_s, int sz, va_list args, int num_opt, int z);
int print_digit(const char *format, char *f_s, int sz, va_list args, int num_opt, int z);
int print_percent(const char *format, char *f_s, int sz, va_list args, int num_opt, int z);
int print_string(const char *format, char *f_s, int sz, va_list args, int num_opt, int z);
void str_rev(char *s);
char *to_string(int n);

#endif /*MAIN_H*/

