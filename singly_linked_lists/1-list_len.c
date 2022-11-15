#include"lists.h"
/**
  * list_len- count a number of node of the singly linked list.
  * @h: head of the linked list.
  * Return: number of node/elemen.
  */
size_t list_len(const list_t *h)
{
size_t node = 0;

	while (h)
	{
		node += 1;
		h = h->next;
	}
return (node);
}
