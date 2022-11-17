#include"lists.h"
/**
  * add_nodeint - add a new node in beggining.
  * @head: double pointero to head.
  * @n: member int of the struct list.
  * Return: newnode.
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodefirst = malloc(sizeof(listint_t));

	if (newnodefirst == NULL)
	{
	printf("Error\n");
	return (NULL);
	}
	else
	{
		newnodefirst->n = n;
		if (newnodefirst->n == '0')
			{
			return (NULL);
			}
		newnodefirst->next = *head;
		*head = newnodefirst;
	}
return (newnodefirst);
}
