#include "main.h"

char *fs_init(char *s, int n)
{
	int i, j, k;
	char *s2, *fs;


	s2 = s;
	j = 0;
	while (*s2)
	{
		for (i = 0; s2[i] < 'a'; i++)
			j++;
		s2++;
		for(; *s2 != '%' && *s2 != 0; s2++)
			;
	}
	fs = malloc(n - j + 1);
	for (k = 0; k < n - j; k++)
		fs[k] = 'a';
	fs[k] = 0;
	return (fs);
}
