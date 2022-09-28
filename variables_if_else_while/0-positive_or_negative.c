#include < stdlib.h >
#include < time.h >
#include < stdio.h >
/** 
 * main - valor positivo
 *
 * return - return valor positivo
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{printf("is positive");
}
if (n < 0)
{printf("is negative");
}
if (n == 0)
{printf("is ZERO");
}
return (0);
}
