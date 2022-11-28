#include"hash_tables.h"
/**
  * key_index - give me the index of the key.
  * @key: is the key
  * @size: sieze of the array og the hashtable.
  * Return: index wich stored pair key/value in the array.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
