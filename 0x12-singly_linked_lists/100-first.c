#include <stdio.h>
/**
 * before_main - prints statement
 * hare - prints a string before main funtion is executed
 */
void __attribute__((constructor)) hare(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
