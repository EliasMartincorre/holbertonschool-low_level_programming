#include "lists.h"
/**
 * delete_dnodeint_at_index - delete especifico index.
 * @head: first element of the list.
 * @index: index node to delete..
 *
 * Return: suceffully 1, failure -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;/** se inicializa el nodo*/
	unsigned int i = 0;

	if (!head || !(*head))/** verificacion de la nulidad*/
	{
		return (-1);
	}
	else
	{
		temp = *head;

		while (index != i++ && temp)
			{
			temp = temp->next;
			}
		if (!temp)
			{
			return (-1);
			}
		if (temp->next)
			{
			temp->next->prev = temp->prev;
			}
		if (index == 0)
			{
			*head = temp->next;
			}
		else
			{
			temp->prev->next = temp->next;
			}
		free(temp);
		return (1);
	}
	return (-1);
}

