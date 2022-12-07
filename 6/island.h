#ifndef __ISLAND_H
#define __ISLAND_H

typedef struct island {
    const char *name;
    const char *opens;
    const char *closes;
    struct island *next;
} island;

void display(island *start);
island* create(char *name);

#endif