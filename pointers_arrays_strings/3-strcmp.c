#include "main.h"
/**
  *
  *
  *
  *
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int c = 0;
	
	for (; s1[i] != '\0'; )
	{
		i++;
	}
	for ( ; s2[c] != '\0'; )
	{
		c++;
	}
    return (i - c) ;
}
