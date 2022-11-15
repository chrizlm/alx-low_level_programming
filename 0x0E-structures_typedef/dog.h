#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * dog_t - Typedef for dog struct
 */

typedef struct dog dog_t;

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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
