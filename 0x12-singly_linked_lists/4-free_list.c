#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
	temporary = head;
	head = head->next;
	free(temporary->str);
	free(temporary);
	}
}
