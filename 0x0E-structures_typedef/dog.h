#ifndef DOG_H
#define DOG_H
/**
 * struct dog - properties of dog
 * @name: first property
 * @age: second property
 * @owner: third property
 *
 * Description: structure to define dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
