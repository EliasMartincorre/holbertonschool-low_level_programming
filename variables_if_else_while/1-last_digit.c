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
printf("%d Last digit of", n);
printf("%d is", n % 10);
pintf("and is greater than 5\n");
}
if (n % 10 == 0)
{
printf("%d Last digit of", n);
printf("%d is", n % 10);
printf("and is zero\n");
}
if (n % 10 < 6)
{
printf("%d Last digit of", n);
printf("%d is", n % 10);
printf("and is zero\n");
}
return (0);
}
