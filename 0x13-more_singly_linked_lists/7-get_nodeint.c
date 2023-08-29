#include "lists.h"
/**
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
	}
	return (head);
}
