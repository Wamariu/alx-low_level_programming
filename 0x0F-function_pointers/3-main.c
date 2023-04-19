#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: arguement count
 * @argv: string of arguements in an array
 * Return: 0
 */
int main(argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '0')
	{
		printf("Error\n");
		exit(99);
	}

	0 = get_op_func(argv[2]);
	if (0 == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("d\n", o(a, b));

	return (0);
}
