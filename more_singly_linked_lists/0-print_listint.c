#include"lists.h"
/**
  * print_listint - print the member int of the node.
  * @h: pointer to head of the list.
  * Return: numbers of node.
  */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;/**count number of element*/

	while (h)/** run while h exist*/
	{
		printf("%d\n", h->n);/** print member n*/
		node += 1;
		h = h->next;/** factor of acercamiento*/
	}
	return (node);
}
