#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the first node
 * @n: the number
 *
 * Return: data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *data;

	data = malloc(sizeof(listint_t));

	if (data == NULL)
		return (NULL);

	data->n = n;
	data->next = *head;
	*head = data;

	return (data);
}
