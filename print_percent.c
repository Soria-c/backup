#include "main.h"

int print_percent(const char *format, char *f_s, int sz, va_list args, int num_opt, int z)
{
	int copy, i, j, r;
	char *f_check;
	
	r = 0;
	for (copy = 0; copy < sz; copy++)
		f_s[copy] = format[z + copy];
	f_s[copy] = '%';
	j = copy + 1;
	for (; format[copy + z + num_opt + 1] != '\0'; copy++)
		f_s[copy + 1] = format[copy + z + num_opt + 1];
	f_s[copy + 1] = '\0';
	f_s = f_s + j;
	f_check = f_s;
	for (i = 0; *f_check != '%' && *f_check != 0; i++, f_check++)
		;
	z = z + sz + num_opt + 1;
	r = f_select(format, f_s, f_check, i, args, z);
	if (r == 1)
		return (r);
	return (r);
}
