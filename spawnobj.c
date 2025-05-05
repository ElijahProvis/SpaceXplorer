/*
16/04/25    Elijah Provis
ver 1   player entry
*/
#include "structures.h"
#include "spawn.h"
#include <stdlib.h>
#include "gengrid.h"
#include "global.h"
void spawnobjects(int i) {
    if (i % 4 == 0 && junkcount < 10) {
        junkarray[junkcount].x = rand() % GRID_SIZE;
        junkarray[junkcount].y = rand() % GRID_SIZE;
        junkcount++;
    }
    if (i % 6 == 0 && aliencount < 10) {
        alienarray[aliencount].x = rand() % GRID_SIZE;
        alienarray[aliencount].y = rand() % GRID_SIZE;
        aliencount++;
    }
}
