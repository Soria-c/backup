#include "main.h"
char *to_string(int n)
{
	char *s;
	int i, f = 0;
	unsigned long t = 10, n2 = n;

	s = malloc(20);
	if (n == 0)
	{
		s[0] = n + '0';
		s[1] = '\0';
		return (s);
	}
	if (n < 0)
	{
		n2 = -n2;
		f = 1;
	}
	for (i = 0; (n2 / (t / 10)) != 0; i++)
	{
		s[i] = ((n2 % t) / (t / 10)) + '0';
		t *= 10;
	}
	if (f == 1)
	{
		s[i] = '-';
		s[i + 1] = '\0';
	}
	else
		s[i] = '\0';
	str_rev(s);
	return (s);
}
void str_rev(char *s)
{
	int j, k = 0;
	char m;

	j = str_len(s);
	for (j = j - 1; k < j; j--, k++)
	{
		m = *(s + j);
		*(s + j) = *(s + k);
		*(s + k) = m;
	}
	
}
