#include<stdio.h>
#include"3-calc.h"
/**
  *
  *
  *
  */
typedef struct +
{
	char *sum
int op_add(int a, int b){return a + b;}
}
/**
  *
  *
  */
typedef struct -
{
	char *sub;
int op_sub(int a, int b){return a - b;}
}
/**
  *
  *
  *
  */
typedef struct *
{
	char  *mul;
int op_mul(int a, int b){return a * b}
}
/**
  *
  *
  *
  */
typedef struct /
{
	char *div;
int op_div(int a, int b){return a / b}
}
/**
  *
  *
  *
  *
  */
typedef struct %
{
	char *mod;
int op_mod(int a, int b){return num1 % num2}
}
