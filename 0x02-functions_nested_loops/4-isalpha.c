#include "main.h"
/**
 * _isalpha - used to check for alphabetic character
 * @c: to be checked
 *
 * Return: 1 if alphabetic character 0 otherwise
 */
int _isalpha(int c);
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

