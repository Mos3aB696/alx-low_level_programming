#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the sturct
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *data;

	if (head == NULL || *head == NULL)
		return;

	while (head != NULL)
	{
		data = head;
		head = head->next;
		free(data);
	}
}
