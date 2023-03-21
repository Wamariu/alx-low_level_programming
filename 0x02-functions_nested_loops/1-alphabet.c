#include "main.h"
/**
 * main - prints alphabet in lowercase followed by newline
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

	
