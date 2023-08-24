#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head
 * @str: the string
 *
 * Return: data
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *data;
	int count = 0;

	while (str[count] != '\0')
		count++;

	data = malloc(sizeof(list_t));

	if (data == NULL)
		return (NULL);

	data->len = count;
	data->str = strdup(str);
	data->next = *head;
	*head = data;

	return (data);
}
