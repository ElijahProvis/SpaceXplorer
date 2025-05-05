/*
16/04/25    Elijah Provis
ver 1   astrospawn
*/
#include <stdlib.h>
#include "gengrid.h"
#include "spawn.h"
#include "global.h"
void spawnasteroid() {
    astro.x =rand() % GRID_SIZE;
    astro.y = rand() % GRID_SIZE;
    astro.direction = rand() % 4;
}
