#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: linked list to be added to
 * @str: str to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *ptr;

	ptr = *head;
	/* create a new node */
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	/* for the first node, we don't need ptr */
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	/* from the second node onwards, we need ptr to be at the last node */
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	/* use ptr to connect the last node to the new node */
	ptr->next = new;
	return (*head);
}
