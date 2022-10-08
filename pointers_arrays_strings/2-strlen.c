#include "main.h"
/**
  *_strlen - string length
  *
  * @s: string
  *
  * Return: length
  */
int _strlen(char *s)
{
	int largo;

	largo = 0;

	for (; *s != '\0'; s++)
	{
		largo++;
	}

	return (largo);
}
