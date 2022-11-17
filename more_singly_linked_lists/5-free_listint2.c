#include"lists.h"
/**
  * free_listint2 - libera linked list, use double pointer.
  * @head: double pointer. to point head of the list.
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
}
