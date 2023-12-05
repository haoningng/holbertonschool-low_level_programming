#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table we want to look into
 * @key: the key we are looking for
 *
 * Return: value associated with the element/ NULL if key not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_pointer;

	if (ht == NULL)
		return ("(null)");
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return ("(null)");
	node_pointer = ht->array[index];
	while (node_pointer != NULL)
	{
		if (strcmp(node_pointer->key, key) == 0)
			return (node_pointer->value);
		node_pointer = node_pointer->next;
	}
	return (ht->array[index]->value);
}
