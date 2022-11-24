#include"lists.h"
/**
* add_dnodeint - add in the biggining.
* @head: double pointer at head of the list.
* @n: member data n.
* Return: new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));/**memory allocate for new node*/


if (newnode == NULL)/** verification of suceffuly*/
{
return (NULL);
}
newnode->n = n;/** asignament value of the nodes*/
newnode->prev = NULL;
newnode->next = *head;

if (*head != NULL)/** lists is empty new node equal head*/
{
(*head)->prev = newnode;
}
*head = newnode;


return (newnode);
}
