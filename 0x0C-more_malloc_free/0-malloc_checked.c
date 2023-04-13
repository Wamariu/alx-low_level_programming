#include "main.h"
/**
 * malloc_checked - allocate memory using malloc
 * @b: unsigned int memory size to allocate
 * Return: void printer to malloc'd memory space
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NUll)
		exit(98);

	return (p);
}
