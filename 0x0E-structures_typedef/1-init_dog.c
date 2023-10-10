#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - see code
 * @d: Dog
 * @name: name of the dog
 * @age: dog age
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
