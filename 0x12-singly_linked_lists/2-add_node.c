#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds newnode at the beginning of list
 * @head: head of the list pointer
 * @str: string tombe duplicated and stored
 *
 * Return: address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
	free(new_node);
	return (NULL);
	}

	len = strlen(str);

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
