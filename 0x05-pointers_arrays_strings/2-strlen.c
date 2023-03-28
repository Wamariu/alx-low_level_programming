#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 *
 * Return: string length number
 */
void _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
