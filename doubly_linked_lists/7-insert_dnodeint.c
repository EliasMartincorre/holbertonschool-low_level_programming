#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node in specifik position.
 * @head: double pointer to begginin of the list.
 * @idx: index to insert new node.
 * @n: data int of member n.
 *
 * Return: new_node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, size_t idx, int n)
{
	dlistint_t *temp = *head;
	size_t node;

dlistint_t *newnode = malloc(sizeof(dlistint_t));/**allocate memory*/

	if (newnode == NULL)/** verification of succefuly allocate*/
		{
		return (NULL);
		}
	newnode->n = n; /** se asigna el valor ingresado al member n*/

	if (idx == 0)
		{
		return (add_dnodeint(head, n));
		}
	if (temp->next == NULL)
		{
		return (add_dnodeint_end(head, n));
		}

	for (node = 0; node < (idx - 1); node++)/** recorre el index*/
	{
		if (temp == NULL || temp->next == NULL)/** verifica index no out of list*/
		{
			return (NULL);
		}

		temp = temp->next;/** avanza al siguiente nodo*/
	}

	newnode->next = temp->next;/**nuevo nodo apunta al siguiente index */
	newnode->prev = temp;
	temp->next = newnode;/** el nodo anterior aputa al nodo insertado*/
	return (newnode);
}

