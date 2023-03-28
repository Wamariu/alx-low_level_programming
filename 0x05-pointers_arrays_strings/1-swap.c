#include "main.h"
/**
 * swap_int - used to switch values of two integers
 * @a: value to be swapped
 * @b: value to be swapped
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
