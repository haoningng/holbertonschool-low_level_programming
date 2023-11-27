#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returs the nth node of a dlistint_t list
 * @head: the pointer to the dlistint_t list
 * @index: the index of the node starting from 0
 *
 * Return: the pointer to the nth node of the list or NULL if it doesnt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count;

	count = 0;
	ptr = head;
	if (head != NULL)
	{
		while (ptr != NULL)
		{
			if (count == index)
			{
				return (ptr);
			}
			ptr = ptr->next;
			count++;
		}
		return (NULL);
	}
	return (NULL);
}
