#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "door_struct.h"

#define DOORS_COUNT 15
#define MAX_ID_SEED 10000

void initialize_doors(struct door* doors);
void bubble(struct door* doors, int size);
void output(struct door* doors);
void closed_doors(struct door* doors);

int main() {
    struct door doors[DOORS_COUNT];
    initialize_doors(doors);
    bubble(doors, DOORS_COUNT);
    closed_doors(doors);
    output(doors);
    return 0;
}

// Doors initialization function
// ATTENTION!!!
// DO NOT CHANGE!
void initialize_doors(struct door* doors) {
    srand(time(0));
    int seed = rand() % MAX_ID_SEED;
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = rand() % 2;
    }
}
void bubble(struct door* doors, int size) {
    for (int a = 0; a < size - 1; a++) {
        for (int c = (size - 1); c > a; c--) {
            if (doors[c - 1].id > doors[c].id) {
                struct door temp = doors[c - 1];
                doors[c - 1] = doors[c];
                doors[c] = temp;
            }
        }
        }
    }

void output(struct door* doors) {
    for (int a = 0; a < DOORS_COUNT; a++)
        printf("%d, %d\n", doors[a].id, doors[a].status);
}
void closed_doors(struct door* doors) {
    for (int i = 0; i < DOORS_COUNT; i++)
       doors[i].status = 0;
}
