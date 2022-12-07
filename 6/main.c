#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "island.h"

int main() {
    setlocale(LC_ALL, "Russian");
    island *amity = create("Дружбы");
    island *craggy = create("Скалистый");
    island *isla_nublar = create("Туманный");
    island *shutter = create("Проклятых");

    amity->next = craggy;
    craggy->next = isla_nublar;
    isla_nublar->next = shutter;

    display(amity);

    free(amity);
    free(craggy);
    free(isla_nublar);
    free(shutter);

    return 0;
}

