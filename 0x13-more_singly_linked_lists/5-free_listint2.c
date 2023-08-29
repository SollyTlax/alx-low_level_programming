#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list.
 * @head: Double Pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->;
		free(current);
		current = temp;
	}

	*head = NULL;
}
