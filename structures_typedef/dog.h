#ifndef DOG_H
#define DOG_H
/**
  * struct dog - define the name age and owner de un can.
  * @name: Name of the dog.
  * @age: AGE of the dog.
  * @owner: Owner of the dog.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
