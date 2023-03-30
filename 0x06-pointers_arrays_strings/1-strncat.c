#include "main.h"
/**
 * _strncat - it concacenates two strings
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: 'dest' edited string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
