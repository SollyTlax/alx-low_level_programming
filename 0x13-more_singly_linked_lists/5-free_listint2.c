#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double Pointer to the head of the list.
 *
 * Description:sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
/*		current = current->next;*/
		free(*head);
		*head = temp;
	}

	head = NULL;
}
