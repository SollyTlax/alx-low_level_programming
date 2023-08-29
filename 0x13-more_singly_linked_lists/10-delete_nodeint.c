#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t
 * linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *pre;

	if (!(*head))
		return (-1);
	i = 0;
	pre = NULL;
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			pre->next = node->next;
			free(node);
			return (1);
		}
		pre = node;
		node = node->next;
		i++;
	}

	return (-1);
}
