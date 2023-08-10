#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: pointer to memory or terminate with value 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
