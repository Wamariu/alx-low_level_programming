#include "lists.h"
/**
 * listint_len - finds number of elements in a listint_len list
 * @h: linked list head
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		;

	return (count);
}
