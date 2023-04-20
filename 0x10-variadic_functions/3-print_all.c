#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printchar - print character
 * @list: va_list passed to function
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _printstr - print string
 * @list: va_list passed to function
 */
void _printstr(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * _printfloat - prints float
 * @list: va_list passed to function
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _printint - prints integer
 * @list: va_list passed to function
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_all - prints anything
 * @format: formats to be used and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
