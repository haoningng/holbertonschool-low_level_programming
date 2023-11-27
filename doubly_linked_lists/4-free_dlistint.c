#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the pointer to the dlistint_t list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head != NULL)
	{
		ptr = head->next;
		while (ptr != NULL)
		{
			free(head);
			head = ptr;
			ptr = ptr->next;
		}
		free(head);
	}
}
