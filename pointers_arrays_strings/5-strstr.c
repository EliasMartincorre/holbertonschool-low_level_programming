#include "main.h"
/**
  *_strstr- busca subsecuencia de string
  *
  *@haystack: string
  *
  *@needle: subsecuencia
  *Return: subsecuencia
  */
char *_strstr(char *haystack, char *needle)
{
	int contador;
	int large;

		for (contador = 0; haystack[contador] != '\0'; contador++)
		{
			for (large = 0; needle[large] != '\0'; large++)
			{
				if (haystack[contador] == needle[large] &&
					haystack[contador + 1] == needle[large + 1] &&
					haystack[contador + 2] == needle[large + 2])
					return (needle);
			}
		}
return (0);
}
