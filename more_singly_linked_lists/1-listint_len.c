#include"lists.h"
/**
  * listint_len - Print number of element the list.
  * @h: pointer of head the list.
  * Return: number of element.
  *
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
	len += 1;
	h = h->next;
	}
	return (len);
}
