#include "main.h"
/**
  * swap_int - intercambia punteros
  *
  * @a: point
  *
  * @b: point
  */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
