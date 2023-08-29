#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the sturct
 * @idx: index
 * @n: the value
 *
 * Return: newData
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newData, *current;
	unsigned int i;

	newData = malloc(sizeof(listint_t));

	

	newData->n = n;

	if (idx == 0)
	{
		newData->next = *head;
		*head = newData;
		return (newData);
	}

	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(newData);
			return (NULL);
		}
		current = current->next;
	}
	newData->next = current->next;
	current->next = newData;
	return (newData);
}
