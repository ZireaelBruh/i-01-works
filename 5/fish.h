#ifndef __FISH_H
#define __FISH_H

typedef struct exercise {
    const char *description;
    float duration;
} exercise;

typedef struct meal {
    const char *ingredients;
    float weight;
} meal;

typedef struct preferences {
    meal food;
    exercise exercise;
} preferences;

typedef struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    preferences care;
} fish;

void catalog(struct fish);
void label(struct fish);

#endif