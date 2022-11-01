#ifndef CALC
#define CALC
/**
  * struct op - tipo de structura necesaria para poder trabajar las funciones.
  * se usa en get_op_function.
  * @op: puntero a char.
  * @f: modelo standar de la funcion.
  */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif
