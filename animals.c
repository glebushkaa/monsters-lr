#include <stdio.h>

enum AnimalType { PIG, CHICKEN, GOAT, CAT, DOG, OSTRICH };

struct Animal {
    enum AnimalType type;
    char name[20];
    int legsCount;
};

void printAnimal(struct Animal* animal);
char* getAnimalType(enum AnimalType type);

void main() {
    struct Animal cat = {CAT, "Murka", 4};
    struct Animal chicken = {CHICKEN, "Nuggets", 2};

    printAnimal(&cat);
    printAnimal(&chicken);
}

void printAnimal(struct Animal* animal) {
    char* type = getAnimalType(animal->type);
    printf("This %s is %s and it has %i legs\n", type, animal->name,
           animal->legsCount);
}

char* getAnimalType(enum AnimalType type) {
    switch (type) {
        case PIG:
            return "pig";
        case CHICKEN:
            return "chicken";
        case GOAT:
            return "goat";
        case CAT:
            return "cat";
        case DOG:
            return "dog";
        case OSTRICH:
            return "ostrich";
        default:
            return "animal";
    }
}
