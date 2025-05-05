/*
16/04/25    Elijah Provis
ver 1   alien junk collision
*/
#include "structures.h"
#include "spawn.h"
#include "global.h"

void collision(player *p) {
    for (int k = 0; k < 10; k++) {
        if (p->x == junkarray[k].x && p->y == junkarray[k].y) {
            p->junk += junkarray[k].numberofjunk;
            p->score += junkarray[k].points;
            junkarray[k].x = -1;
            junkarray[k].y = -1;
        }
    }
    for (int l = 0; l < 10; l++) {
        if (p->x == alienarray[l].x && p->y == alienarray[l].y) {
            p->health -= alienarray[l].damage;
            p->score += alienarray[l].points;
            alienarray[l].x = -1;
            alienarray[l].y = -1;

        }
    }
}