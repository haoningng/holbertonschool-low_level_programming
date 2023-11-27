#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the pointer to the list_t list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	if (head != NULL)
	{
		ptr = head->next;
		while (ptr != NULL)
		{
			free(head->str);
			free(head);
			head = ptr;
			ptr = ptr->next;
		}
		free(head->str);
		free(head);
	}
}
