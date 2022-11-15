#include<stdio.h>
#include"lists.h"
/**
  * print_list - imprime los nodos de una lista.
  * @h: pointer at head of linked list.
  *
  * Return: number of node.
  */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			node += 1;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			node += 1;
		}
			h = h->next;
	}
	return (node);
}
