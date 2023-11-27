#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to dlistint_t list
 * @idx: index of the list where the new node should be added
 * @n: integer value of the new node
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	dlistint_t *ptr2;
	unsigned int count;

	if (idx <= 0)
	{
		*h = add_dnodeint(&(*h), n);
		return (*h);
	}
	count = 0;
	for (ptr = *h; ptr->next != NULL; ptr = ptr->next)
	{
		count++;
	}
	if (idx == count && idx == count + 1)
	{
		*h = add_dnodeint_end(&(*h), n);
		ptr = ptr->next;
		return (ptr);
	}
	if (idx > count + 1)
		return (NULL);
	ptr = ptr2 = *h;
	for (count = 0; count < idx; count++)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	ptr2 = ptr2->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = ptr;
	new->next = ptr2;
	ptr->next = new;
	ptr2->prev = new;
	return (new);
}
