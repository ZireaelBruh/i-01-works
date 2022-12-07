#include <stdio.h>
#include "fish.h"

void catalog(fish f) {
    printf("%s - это %s с %d зубами. Ему %d года\n",
    f.name, f.species, f.teeth, f.age);
}

void label(fish a) {
    printf("Кличка: %s\nРазновидноть: %s\n%d года, %d зубов\n", 
    a.name, a.species, a.age, a.teeth);
    printf("Давать %2.2f кг %s и разрешать %s на протяжении %2.2f часов\n",
    a.care.food.weight, a.care.food.ingredients,
    a.care.exercise.description, a.care.exercise.duration);
}