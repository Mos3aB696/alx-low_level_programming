#include "lists.h"

/**
 * delete_nodeint_at_index -  function that deletes the node at
 * index index of a listint_t linked list.
 * @head: the struct
 * @index: the index
 *
 * Return: (1) on succeeded
 * 				 (-1) on failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	cur = *head;
	prev = NULL;

	if (!index)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (cur != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
	}
	prev->next = cur->next;
	free(cur);
	return (1);
}
