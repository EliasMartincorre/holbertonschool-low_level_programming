#include "lists.h"

/**
 * add_nodeint_end - add node last.
 * @head: pointer to head of the list.
 * @n: first member of the node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;

	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		last = *head;

		while (last->next)
		{
			last = last->next;
		}
		last->next = newnode;
	}
	return (newnode);
}

