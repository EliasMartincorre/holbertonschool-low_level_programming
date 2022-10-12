#include"main.h"
/**
  * leet- codifica 1337.
  *
  * @s1: string ingresado
  *
  * Return: string codificado.
  */
char *leet(char *s1)
{
	int i = 0;
	int f;

char s2[11] = {"oleatOLEAT"};
char s3[11] = {"0134701347"};

	for (; s1[i] != '\0'; i++)
	{
		for (f = 0 ; s2[f] != '\0'; f++)
		{
			if (s1[i] == s2[f])
			{
				s1[i] = s3[f];
			}
		}
	f = 0;
	}
	return (s1);
}
