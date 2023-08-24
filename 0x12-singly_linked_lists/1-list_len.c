#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list.
 * @h: the struct
 *
 *Return: count
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
