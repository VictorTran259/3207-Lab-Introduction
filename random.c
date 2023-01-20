#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar() {
    int character;
    int lower_bound = 65;
    int upper_bound = 90;

    character = rand() % (upper_bound - lower_bound + 1) + lower_bound;

    return character;
}
