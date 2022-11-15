#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - structure of a dog
 * @name: character
 * @age: float
 * @owner: character
 * Description: this struct defines a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type of dog struct
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
