#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 * @name: name of dpg
 * @age: age of dog
 * @owner: owner of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
