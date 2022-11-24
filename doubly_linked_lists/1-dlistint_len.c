#include "lists.h"
/**
* dlistint_len - return number of elements.
* @h: head of the double linked list.
* Return: numer of nodes.
*
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t length = 0;

while (h)
{
length += 1;
h = h->next;
}
return (length);
}
