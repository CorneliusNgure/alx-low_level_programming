#ifndef DOG_H
#define DOG_H

/**
 * struct dog - name of the structure
 *
 * @name: name of the first memeber of the structure.
 * @age: name of the second element of the structure.
 * @owner: name of the third element of the strucure.
 *
 * Description: Something to do with a dog.
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
