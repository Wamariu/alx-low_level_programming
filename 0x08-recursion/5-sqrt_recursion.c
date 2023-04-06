#include "main.h"
/**
 * _sqrt_recursion - returns square root of number
 * @n: number value
 * Return: sqare root of value
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}
/**
 * halp - helper function to solve _sqrt_recursion
 * @c: number to determine if square root
 * @i: incrimenter to compare against 'c'
 * Return: square root if natural square root, 0r -1 if none found
 */
int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
