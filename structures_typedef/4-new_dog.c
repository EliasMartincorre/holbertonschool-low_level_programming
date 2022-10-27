#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
* new_dog - create a new dog.
* @name: new name.
* @age: Age.
* @owner: new owner.
* Return: pointer to new dog.
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int lname, lowner;
	 dog_t *new_dog;

	lname = strlen(name);
	lowner = strlen(owner);

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
	{
	return (NULL);
	}
new_dog->name = malloc(sizeof(char) * (lname + 1));
if (new_dog->name == NULL)
	{
	free(new_dog);
	return (NULL);
	}
new_dog->owner = malloc(sizeof(char) * (lowner + 1));
if (new_dog->owner == NULL)
	{
	free(new_dog);
	free(new_dog->name);
	return (NULL);
	}
strcpy(new_dog->name, name);
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
