#include "main.h"
/**
 * rev_string - it reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, c, L;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	L = i;
	for (i--, c = 0; c < L / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
