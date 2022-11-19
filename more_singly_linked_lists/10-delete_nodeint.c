#include"lists.h"
/**
* delete_nodeint_at_index - delete specifique position.
* @head: double pointer begginin of the list.
* @index: position node to delete.
* Return: succefuly 1, error -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *auxiliar = *head, *nextnode;/**nodos auxiliares*/
unsigned int position = index - 1, iterar = 0;/**variable recorrer la list*/

if (auxiliar == NULL)/**verificacion de lista vacia*/
{
	return (-1);
}
if (index == 0)/**delete head, first element*/
{
	*head = auxiliar->next;
	free(auxiliar);
	return (1);


}
while (iterar < position)/** search inde position*/
{
	if (auxiliar == NULL || auxiliar->next == NULL)/** index inside list*/
	{
		return (-1);
	}
	auxiliar = auxiliar->next;/** recorrer list*/
	iterar++;
}
	nextnode = auxiliar->next;/** stored position to delete*/
	auxiliar->next = nextnode->next;/**stored next position*/


	free(nextnode);/**delete position index*/

	return (1);
}
