#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the num of elements of a dlistint_t list
 * @h: pointer to the dlistint_t list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
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
