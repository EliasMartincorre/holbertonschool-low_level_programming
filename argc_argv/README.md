 En este directorio se alojaran los porgramas generados para la curricula de Holberton school. Los programas tendran como objetivos la comprension del uso de de argc y argv.
 argc is greater than zero.
 argv[argc] is a null pointer.
 argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
 argv[0] will be a string containing the program's name or a null string if that is not available. Remaining elements of argv represent the arguments supplied to the program. In cases where there is only support for single-case characters, the contents of these strings will be supplied to the program in lower-case.

the example of form write this is:

#include <stdio.h>

int main (int argc, char *argv[])
{

	  return 0;
}

Donde argc, es la dimension del array *argv[].
El array *argv[] tambien puede ser expresado como **argv, esto debido a que un array es equivalente a un puntero señalando a primer elemento del array.
