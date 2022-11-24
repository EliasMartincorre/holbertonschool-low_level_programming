#include"lists.h"
/**
  * add_dnodeint_end - add node in the endo of the list.
  * @head: double pointer to start of the list-
  * @n: data of member n.
  * Return: pointer to new node or null is failure.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode, *temp = *head;

newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		{
		return (NULL);
		}

newnode->n = n;
newnode->next = NULL;

	if (*head == NULL)
		{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
		}
	else
		{
		while (temp->next)
		{
		temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
		}

return (newnode);
}
