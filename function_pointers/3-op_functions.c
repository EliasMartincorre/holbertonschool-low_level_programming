#include<stdio.h>
#include"3-calc.h"
/**
  *op_add - recibe dos int, devuelve uno.
  * @a: int ingresado.
  * @b: int ingresado.
  * Return: a +b.
  */

int op_add(int a, int b) { return a + b; }
/**
  * op_sub - substration.
  * @a: int.
  * @b: int.
  * Return: resultado.
  */

int op_sub(int a, int b) { return a - b; }
/**
  * op_mul - multiplication.
  * @a: int.
  * @b: int.
  * Return: resultado.
  */
int op_mul(int a, int b) { return a * b; }

/**
  * op_div - divide.
  * @a: int.
  * @b: int.
  * Return: resultado.
  */
int op_div(int a, int b) { return a / b; }
/**
  * op_mod - modulo.
  * @a: int.
  * @b: int.
  * Return: resto.
  */
int op_mod(int a, int b) { return a % b; }

