#include"lists.h"
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
/**
  * add_node_end- add new node at the end
  * @head: pointer to pointer of head of the list.
  * @str: string  for the new node.
  * Return: null or *head the adress of the new element.
  */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *temp;

newnode = malloc(sizeof(list_t));/**aloja espacio para el nuevo nodo*/

if (newnode == NULL)/**en caso de fallo termina el programa */
	return (NULL);

	newnode->str = strdup(str);/** copia el string ingresado al miembro del nodo*/
if (newnode->str == NULL)
	{
	free(newnode);/**string nulo/se libera memoria termina el programa*/
	return (NULL);
	}
	newnode->len = strlen(str);/** asigna el valor len*/
	newnode->next = NULL;
	temp = *head;/**guarda en im puntero auxiliar la direccion de head*/

if (temp == NULL)
	{
	*head = newnode;/** si head es nulo newnode se convierte en head*/
	}
	else
	{
while (temp->next)/** se recorre la lista hasta llegar al final*/
	{
	temp = temp->next;
	}
	temp->next = newnode;/**asigna tail la direccion del newnode.. tail*/
	}
return (*head);/** retorna un puntero al inicio de la lista*/
}
