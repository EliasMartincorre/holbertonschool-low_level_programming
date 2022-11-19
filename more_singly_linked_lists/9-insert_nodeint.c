#include"lists.h"
/**
  * insert_nodeint_at_index - add node in espesifique position.
  * @head: double pointer at the start of the list.
  * @idx: index.
  * @n: data n type int.
  * Return: pointer to a new node.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0, iteracion = 0;
	listint_t *temp, *auxiliar;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	count = listint_len(*head);

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		auxiliar = *head;

		for (; iteracion < (idx - 1); iteracion++)
		{
			auxiliar = auxiliar->next;
		}

temp->next = auxiliar->next;
auxiliar->next = temp;
temp->n = n;
	}
return (temp);
}
/**
 * listint_len - lenght of the list.
 * @h: pointer at start of the list.
 * Return: length.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
	len += 1;
	h = h->next;
	}
	return (len);
}
