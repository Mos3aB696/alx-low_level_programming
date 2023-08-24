#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the pointer to struct
 * @str: the string to dup
 *
 * Return: data
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *data, *current;
	int count = 0;

	while (str[count] != '\0')
		count++;

	data = malloc(sizeof(list_t));

	if (data == NULL)
		return (NULL);

	data->next = NULL;
	data->len = count;
	data->str = strdup(str);

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
