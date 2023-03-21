#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: number to be checked
 *
 * Return: 1 if greater, 0 if zero , -1 if less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
