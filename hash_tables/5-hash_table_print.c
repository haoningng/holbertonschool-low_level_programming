#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count;
	hash_node_t *node_pointer;

	if (ht == NULL)
	{
		return;
	}
	index = count = 0;
	printf("{");
	while (index < ht->size)
	{
		node_pointer = ht->array[index];
		while (node_pointer != NULL)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", node_pointer->key, node_pointer->value);
			count++;
			node_pointer = node_pointer->next;
		}
		index++;
	}
	printf("}\n");
}
