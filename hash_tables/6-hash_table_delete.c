#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node_pointer, *node_pointer2;

	if (ht == NULL)
	{
		return;
	}
	index = 0;
	while (index < ht->size)
	{
		node_pointer = node_pointer2 = ht->array[index];
		if (node_pointer != NULL)
			node_pointer2 = node_pointer2->next;
		while (node_pointer != NULL)
		{
			free(node_pointer->key);
			free(node_pointer->value);
			free(node_pointer);
			node_pointer = node_pointer2;
			if (node_pointer2 == NULL)
				break;
			node_pointer2 = node_pointer2->next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
