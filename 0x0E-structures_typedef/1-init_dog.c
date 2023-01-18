#include "dog.h"
/**
 * init_dog - function initializes a variable
 * @d: pointer to struct
 * @name: first operand
 * @age: second operand
 * @owner: third operand
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
