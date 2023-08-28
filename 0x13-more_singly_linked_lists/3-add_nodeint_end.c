#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the first struct
 * @n: the number to add in the end of struct
 *
 * Return: data
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *data, *current;

	data = malloc(sizeof(listint_t));

	if (data == NULL)
		return (NULL);

	data->n = n;
	data->next = NULL;

	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = data;
	}
	else
		*head = data;

	return (data);
}
