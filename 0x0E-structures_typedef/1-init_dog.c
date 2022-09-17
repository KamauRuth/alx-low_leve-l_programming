#include "dog.h"
<<<<<<< HEAD

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
=======
#include <stdlib.h>

/**
 * init_dog - intializes a variable of type struc dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: struc variable
 *
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
>>>>>>> 58fdc4aa9c889ec77f038b45a8750f21e50cd1e5
}
