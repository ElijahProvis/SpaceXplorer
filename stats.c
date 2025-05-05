/*
16/04/25    Elijah Provis
ver 1   print player stats
*/

#include <stdio.h>
#include "structures.h"
#include "global.h"

void printstats(player *p){
    printf("Turns remaining: %d    Score: %d   Health: %d  Fuel: %d  Junk: %d\n", p->turns, p->score, p->health,  p->fuel, p->junk);
}
