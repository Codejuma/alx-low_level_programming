#include "dog.h"
#include <stdlib>

/**
 * new_dog - creates a new dof
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Return NULL if the function fails
 * otherwise struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int a, lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (a = 0; a < lname; a++)
		p_dog->name[a] = name[a];
	p_dog->name[a] = '\0';

	p_dog->age = age;

	for (a = 0; a < lowner; a++)
		p_dog->owner[a] = owner[a];
	p_dog->owner[a] = '\0';

	return (p_dog);
}
