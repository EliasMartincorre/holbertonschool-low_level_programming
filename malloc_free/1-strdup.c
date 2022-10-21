#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
  *_strdup- copia un string en momoria dinamica.
  *
  * @str: string ingresado.
  * Return: puntero al nuevo string.
  */
char *_strdup(char *str)
{
int i, length = 0;
char *copia;

if (str == 0)
{
	return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
{
	length++;
}
copia = malloc((length + 1) * sizeof(char));

if (copia == NULL)
{
	return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
	copia[i] = str[i];
	copia[length + 1] = '\0';
}
	return (copia);
	free(copia);
	return (0);

}
