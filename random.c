#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

char randchar() {
    int lower_bound = 65;
    int upper_bound = 90;

    char character = (char) (rand() % (upper_bound - lower_bound + 1) + lower_bound);

    return character;
}
