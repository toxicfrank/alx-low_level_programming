#ifndef DOG_H
#define DOG_H
/**
 * struct dog - just a structure
 * @name: function parameter
 * @age: function parameter
 * @owner: function parameter
 * Description: long
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
