#include "main.h"

int f_select(const char *format, char *fs, char *s, int sz, va_list args, int z)
{
	int num_opt, r;
	r = 0;
	for (num_opt = 0; s[num_opt] < 'a'; num_opt++)
		;
	if (s[1] == '%')
		num_opt = 1;
	switch(s[num_opt])
	{
		case 'c':
			r = print_char(format, fs, sz, args, num_opt, z);
			break;
		case 'd':
			r = print_digit(format, fs, sz, args, num_opt, z);
			break;
		case 'i':
			r = print_digit(format, fs, sz, args, num_opt, z);
			break;
		case '%':
			r = print_percent(format, fs, sz, args, num_opt, z);
			break;
		case 's':
			r = print_string(format, fs, sz, args, num_opt, z);
			break;
		default:
			if (*s == '\0')
				return (0);
			return (1);
	}
	if (r == 1)
	{
		return (1);
	}
	return (0);
}
