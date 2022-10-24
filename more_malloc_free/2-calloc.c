#include"main.h"
#include<stdlib.h>
/**
  * _calloc- allocate memory for an array.
  * @nmemb: quantited of element.
  * @size: tamaño de cada elemento.
  * Return:in case of failure /null/ otherwise ptr.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size * sizeof(unsigned int));
if (ptr == NULL)
{
	return (NULL);
}
return (ptr);
}
