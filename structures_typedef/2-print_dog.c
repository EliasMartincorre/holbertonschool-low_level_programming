#include"dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
  * print_dog -print info of the dog
  * @d:pointer.
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	if (d->age == 0 || d->owner == NULL)
	{
	printf("%s", "(nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}

}
