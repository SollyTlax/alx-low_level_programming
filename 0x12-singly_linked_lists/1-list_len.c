#include "lists.h"
#include <stddef.h>

/**
 * list_len - count the number of elements in a linked list.
 * @h: head of linked list pointer
 *
 * Return: number od elements in list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	for (; h; h = h->next)
		elements++;
	return (elements);
}
