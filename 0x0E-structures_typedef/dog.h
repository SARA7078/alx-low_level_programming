#ifndef DOG_H
#define DOG_H

/**
* struct dog - Define a new type struct dog
* @name: The dog's name
* @age: The dog's age
* @owner: The dog's owner
* Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#endif

