#include "dog.h"
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
d->name = malloc(sizeof(char) * (strlen(name) + 1));
strcpy(d->name, name);
d->age = age;
d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
strcpy(d->owner, owner);

}
