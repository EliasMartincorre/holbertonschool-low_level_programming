#include"lists.h"
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
/**
  * add_node- add a new node.
  * @head: pointer to a the first element.
  * @str: pointer to a string.
  * Return: a pointer to a new node.
  */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
