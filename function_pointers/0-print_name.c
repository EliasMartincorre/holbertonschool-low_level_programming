#include"function_pointers.h"
#include<stddef.h>
#include<stdlib.h>
/**
  * print_name - print name
  * @name: name ingresado.
  * @f: funcion a agregar.
  */
void print_name(char *name, void (*f)(char *))
{

	if (f)
	{
		f(name);
	}
}
