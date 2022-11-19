#include "lists.h"
/**
 * insert_nodeint_at_index - insert node in specifik position.
 * @head: double pointer to begginin of the list.
 * @idx: index to insert new node.
 * @n: data int of member n.
 *
 * Return: new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int node;

listint_t *newnode = malloc(sizeof(listint_t));/**allocate memory*/

	if (newnode == NULL)/** verification of succefuly allocate*/
	{
		return (NULL);
	}

	if (idx == 0)
	{
		newnode->next = temp;/** index cero new node equal head*/
		*head = newnode;

		return (newnode);
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
	temp->next = newnode;/** el nodo anterior aputa al nodo insertado*/
	newnode->n = n;/** se asigna el valor ingresado al member n*/
	return (newnode);
}

