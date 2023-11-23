#include <stdio.h>

enum MonsterType {
    ORC, GOBLIN, TROLL
};

struct Monster {
    enum MonsterType type;
    char name[20];
    float health;
};

void printMonster(struct Monster* monster);

void main() {
    struct Monster monster = {
        ORC, "WeirdMonster",78.5 
    };
    printMonster(&monster);
}

void printMonster(struct Monster* monster) {
    printf("I'm %s. My health is %f", monster->name, monster->health);
}

