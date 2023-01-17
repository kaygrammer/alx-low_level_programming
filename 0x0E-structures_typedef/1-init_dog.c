#include "dog.h"
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - check the code
 *
 * @d: input
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
d->name = name;
d->age = age;
d->owner = owner;
}
