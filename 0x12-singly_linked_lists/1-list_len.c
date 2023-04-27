#include "lists.h"
/**
 * list_len - returns number of elements in list
 * @h: head of linked list
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		current = current->next;
		c++;
	}

	return (c);
}
