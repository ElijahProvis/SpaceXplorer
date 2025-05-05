/*
16/04/25    Elijah Provis
ver 1   int objs
*/
#include "structures.h"
#include "spawn.h"
#include "global.h"

void initobjects() {
    for (int i = 0; i < 10; i++) {
        junkarray[i].x = -1;
        junkarray[i].y = -1;
        alienarray[i].x = -1;
        alienarray[i].y = -1;
    }
}