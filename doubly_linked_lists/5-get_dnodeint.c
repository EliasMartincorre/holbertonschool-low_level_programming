#include"lists.h"
/**
  * get_dnodeint_at_index - print value n of index.
  * @head: pointer firs element of the list.
  * @index:index searching.
  * Return: pointer to a node index.
  *
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{ unsigned int i = 0;
	if (head == NULL)
	{
	return (NULL);
	}

	for (; i < index; i++)
	{
		if (head == NULL || head->next == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
return (head);
}
