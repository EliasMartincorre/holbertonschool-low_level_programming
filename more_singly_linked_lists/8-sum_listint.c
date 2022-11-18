#include"lists.h"
/**
  * sum_listint- sum of data int of the node.
  * @head: pointer first elemento of the list.
  * Return: value total of sum all element of the list.
  *
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head)
	{
	sum += head->n;
	head = head->next;
	}
	return (sum);
}
