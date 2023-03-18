#include <stdio.h>
/**
 * main - entry point
 * Description: use putchar to print alphabet in lowercase then uppercase
 * Return: 0
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	d = 'A';
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

