#include "lists.h"
/**
 * add_dnodeint_end - new node at the end of a dlistint_t list.
 * @head: the head of list
 * @n: data of new node
 *
 * Return: end_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *last = *head;

	end_node = malloc(sizeof(dlistint_t));
	if (!end_node)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
		return (end_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = end_node;
	end_node->prev = last;

	return (end_node);
}
