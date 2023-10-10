#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: The age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog
 *, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
char *name_copy, *owner_copy;
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
return (NULL);
}
name_copy = strdup(name);
owner_copy = strdup(owner);
if (name_copy == NULL || owner_copy == NULL)
{
free(name_copy);
free(owner_copy);
free(new_dog_ptr);
return (NULL);
}
new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;
return (new_dog_ptr);
}
