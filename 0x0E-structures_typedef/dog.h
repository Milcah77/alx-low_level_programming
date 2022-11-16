#ifndef DOG
#define DOG

/**
 * struct dog - dpg class
 * @name: dog's name
 * @age: dog's age
 *
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

void free_dog(dog_t *d);

#endif
