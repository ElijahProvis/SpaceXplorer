/*
16/04/25    Elijah Provis
ver 1   player spawn
*/
#include "structures.h"
#include "global.h"
void spawnplayer(player *p){
    p->x = 10;
    p->y = 10;
    p->score = 0;
    p->junk = 0;
}
