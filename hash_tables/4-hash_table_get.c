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

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
        return ("(null)");
    return (ht->array[index]->value);
}
