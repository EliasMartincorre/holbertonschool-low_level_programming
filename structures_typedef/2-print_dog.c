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
		return;
	}
	if (d->age == 0)
	{
	d->age = 0;
	}
	if (d->owner == NULL)
	{
	d->owner = "(nil)";
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
