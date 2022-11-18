#include"lists.h"
/**
  * get_nodeint_at_index - print value n of index.
  * @head: pointer firs element of the list.
  * @index:index searching.
  * Return: pointer to a node index.
  *
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{ unsigned int i = 0;
	if (head == NULL)
	{
	return (NULL);
	}

	for (; i < index; i++)
	{
		head = head->next;
	}
return (head);
}
