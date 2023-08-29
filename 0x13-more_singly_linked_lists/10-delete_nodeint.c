#include "lists.h"

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
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	listint_t *current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	}

	listint_t *next_node = current->next;

	if (next_node == NULL)
		return (-1);

	current->next = next_node->;

	free(next_node);
	return (1);
}
