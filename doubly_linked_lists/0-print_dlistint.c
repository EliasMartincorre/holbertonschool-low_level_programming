#include"lists.h"
/**
  * print_dlistint - print double linked list.
  * @h: head of the list.
  * Return: number of node.
  */

size_t print_dlistint(const dlistint_t *h)
{
size_t node = 0;

while (h)
{
	printf("%d\n", h->n);
	node += 1;
	h = h->next;
}
return (node);
}
