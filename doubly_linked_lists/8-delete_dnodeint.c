#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_start(dlistint_t **head);

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
	if (*head)
	{
		for (ptr = *head; ptr->next != NULL; ptr = ptr->next)
		{
			count++;
		}
		if (index > count)
			return (-1);
	}
	else
	{
		return (-1);
	}
	ptr = *head;
	if (index == 0)
	{
		delete_dnodeint_at_start(&(*head));
		return (1);
	}
	for (count = 0; count < index - 1; count++)
	{
		ptr = ptr->next;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	ptr1 = ptr1->next;
	ptr2 = ptr2->next;
	ptr2 = ptr2->next;
	ptr->next = ptr2;
	ptr2->prev = ptr;
	free(ptr1);
	return (1);
}

/**
 * delete_dnodeint_at_start - deletes the node at start of a list
 * @head: pointer to pointer to a linked list
 *
 * Return: 1 if succeeded -1 if not
 */
int delete_dnodeint_at_start(dlistint_t **head)
{
	dlistint_t *ptr;

	if ((*head) == NULL)
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
