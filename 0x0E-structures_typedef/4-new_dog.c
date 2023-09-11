#include <stdlib.h>
#include "dog.h"

/**
 * _strlen -function
 * @s: parameter
 * Return:(0)Always
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy -function
 * @dest: parameter
 * @src: parameter
 *Return:(0)Always
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *Return:(0)Always
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenone, lentwo;

	lenone = _strlen(name);
	lentwo = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenone + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (lentwo + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
