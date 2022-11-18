#include"lists.h"
/**
  * pop_listint - Delete first node of the list.
  * @head: double pointer to start of the line.
  * Return: value of n the node delete.
  *
  */
int pop_listint(listint_t **head)
{
listint_t *tmp;/**varibale temporal para eliminar*/
int ret = 0;/**variable stored int value*/

if (*head == NULL)/** compruebo si la lista esta vacia*/
	{
	return (0);
	}
	tmp = *head;/**almaceno los valores de head */
	*head = tmp->next;/**move head of the second node*/
	ret = tmp->n;/**stored the variable todelete*/

	free(tmp);/**delete head*/
	return (ret);
}
