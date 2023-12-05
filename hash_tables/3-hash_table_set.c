#include <stddef.h>
#include <stdio.h>
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
	char *key_copy = strdup((char *)key), *value_copy = strdup((char *)value);

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key_copy, ht->size);
	new_node = ht->array[index];
	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = value_copy;
			return (1);
		}
		new_node = new_node->next;
	}
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
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
