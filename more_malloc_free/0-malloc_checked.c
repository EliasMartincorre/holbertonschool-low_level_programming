#include "main.h"
#include<stdlib.h>
/**
  * malloc_checked- allocates memory using malloc.
  * @b: variable a guardad.
  * Return: exit(98) when malloc  fail, otherwise *ptr.
  *
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
		if (ptr == NULL)
		{
			exit(98);
		}
	return (ptr);
}
