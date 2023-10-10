#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a created struct called dog
 * @name: of the dog
 * @age: of the dog
 * @owner: of the dog
 * Description - dog has the elements/variables
 * name, age, owner.
 */
struct dog {
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
