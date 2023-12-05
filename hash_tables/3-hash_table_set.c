#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key, must be duplicated
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = malloc(sizeof(char) * strlen(key) + 1);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc(sizeof(char) * strlen(value) + 1);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	index = key_index((const unsigned char *)key, 1024);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
