#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *data;

	while (*head != NULL || head != NULL)
	{
		data = (*head)->next;
		free(*head);
		*head = data;
	}
}
