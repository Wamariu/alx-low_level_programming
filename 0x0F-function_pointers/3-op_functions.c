#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction operator
 * @a: first in
 * @b: second int
 * Return: defference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - division of two numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
