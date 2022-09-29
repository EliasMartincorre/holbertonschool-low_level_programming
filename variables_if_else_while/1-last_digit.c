#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - El ultimo digito
  *
  *Return: return
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %d", n);
printf(" is %d", n % 10);
printf(" and is greater than 5\n");
}
if (n % 10 < 6 && n % != 0 )
{
printf("Last digit of %d", n);
printf(" is %d", n % 10);
printf(" and is less than 6 and not 0\n");
}
if (n % 10 == 0)
{
printf("Last digit of %d", n);
printf(" is %d", n % 10);
printf(" and is zero\n");
}
return (0);
}
