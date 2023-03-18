#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */
/**
 * main - main block
 * Description: a different value is stored evrytime this program is run
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char last[] = "Last digit of";
	char is[] = "is";
	char greater[] = "and is greater than 5";
	char equal[] = "and is 0";
	char less[] = "and is less than 6 and not 0";

	if (n > 5)
		printf(("%s\n", last)("%i\n", n)("%s\n", is)("%s\n", greater));
	else if (n == 0)
		printf(("%s\n", last)("%i\n", n)("%s\n", is)("%s\n", equal));
	else
		printf(("%s\n", last)("%i\n", n)("%s\n", is)("%s\n", less));
	return (0);

}
