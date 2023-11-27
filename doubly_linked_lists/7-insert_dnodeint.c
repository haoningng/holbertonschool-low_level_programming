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

/*	if (idx == 0)
		add_dnodeint(&(*h), n);
	count = 0;
	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	if (idx == count)
		add_dnodeint_end(&(*h), n); */
	ptr = *h;
	ptr2 = *h;
	count = 1;
	while (count != idx)
	{
		ptr = ptr->next;
		ptr2 = ptr2->next;
		count++;
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
	return (*h);
}
