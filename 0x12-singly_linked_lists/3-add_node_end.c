#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Pointer to the head of the linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
	free(new_node);
	return (NULL);
	}

	len = 0;
	while (str[len])
		len++;
	new_node->str = duplicate;
	new_node->str = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
			last_node->next = new_node;
	}
	return (*head);
}
