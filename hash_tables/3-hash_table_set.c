#include"hash_tables.h"
/**
  * hash_table_set - set value.
  * @key: is the key.
  * @value: is value.
  * @ht: hash table.
  * Return: 1 if it succeeded, 0 otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *valueptr, *keyptr;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valueptr = strdup(value);
	if (valueptr == NULL)
		return (0);

	keyptr = strdup(key);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = valueptr;
			return (1);
		}
	}
newnode = malloc(sizeof(hash_node_t));
if (newnode == NULL)
{
	free(valueptr);
		return (0);
}
newnode->key = keyptr;
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
newnode->value = valueptr;
newnode->next = ht->array[index];
ht->array[index] = newnode;
return (1);
}
