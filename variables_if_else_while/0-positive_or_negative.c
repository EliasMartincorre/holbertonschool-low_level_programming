#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - valor positivo
 *
 * return: return valor positivo
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf(n,"is positive");
}
if (n < 0)
{printf(n,"is negative");
}
if (n == 0)
{printf(n,"is ZERO");
}
return (0);
}
