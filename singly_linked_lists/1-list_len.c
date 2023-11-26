#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the num of the elements of a list_t list.
 * @h: list to be printed
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int count;

	ptr = h;
	count = 0;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
