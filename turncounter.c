/*
16/04/25    Elijah Provis
ver 1   turncounter
*/

#include "structures.h"
#include "global.h"

void turncounter(int i, player *p) {
    p->turns = 100-i;
}
