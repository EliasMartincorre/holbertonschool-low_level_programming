#include"main.h"
/**
  *
  *
  *
  *
  */
void reverse_array(int *a, int n)
{
	int rev = 0;
	int temporal;
	int prueba = 0;

	for ( ; rev < n ; rev++)
	{
		prueba++;
	}
	for (rev = 0; rev < (prueba / 2) ; rev++)
	{

	temporal = a[rev];
	a[rev] = a[prueba - rev - 1];
	a[prueba - rev - 1] = temporal;
	}
}
