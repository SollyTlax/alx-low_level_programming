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
	listint_t *current, *next_node = *head;
	unsigned int i = 0;

	if (*current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

/*	listint_t *next_node = current->next;*/
/*	if (next_node == NULL)*/
/*		return (-1);*/
	next_node = current->next;
	current->next = next_node->next;

	free(next_node);
	return (1);
}
