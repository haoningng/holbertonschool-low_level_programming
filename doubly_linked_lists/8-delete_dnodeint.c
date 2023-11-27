#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list
 * @head: pointer to pointer to a linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *ptr1, *ptr2;
	unsigned int count;

	ptr = ptr1 = ptr2 = *head;
	count = 0;
	if (index == 0)
	{
		if (!(*head))
			return (-1);
		ptr = *head;
		ptr = ptr->next;
		if (ptr != NULL)
			ptr->prev = NULL;
		free(*head);
		if (ptr != NULL)
			*head = ptr;
		if (ptr == NULL)
			*head = NULL;
		return (1);
	}
	while (count < index - 1)
	{
		ptr = ptr->next;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
		count++;
	}
	ptr1 = ptr1->next;
	ptr2 = ptr2->next;
	ptr2 = ptr2->next;
	ptr->next = ptr2;
	ptr2->prev = ptr;
	free(ptr1);
	return (1);
}
