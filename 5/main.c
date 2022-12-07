#include <stdio.h>
#include <locale.h>
#include "fish.h"

int main() {
    setlocale(LC_ALL, "Russian");
    fish snappy = {"Зубастик", "Пиранья", 69, 4, {{"мясо", 0.09},
    {"купаться в джакузи", 7.5}}};
    label(snappy);
    return 0;
}