#include"hash_tables.h"
/**
  * hash_table_create - create a hashtable.
  * @size: the size of the array.
  * Return: new table.
  *
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int iterar;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)/**memory allocate for the new table*/
	{
		return (NULL);
	}
	table->size = size;/**define size of the array*/
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table == NULL)/**allocate memory for the array*/
	{
		return (NULL);
	}
	for (iterar = 0; iterar < size; iterar++)
	{
		table->array[iterar] = NULL;/**set nodes in cero*/
	}
	return (table);
}
