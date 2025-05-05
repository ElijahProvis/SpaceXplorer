/*
16/04/25    Elijah Provis
ver 1   print stats to lb
*/

#include <stdio.h>
#include "global.h"

#include "structures.h"

void leaderboard(player *p) {
    FILE *lb;
    lb = fopen("Leaderboard.txt", "a");
    fprintf(lb, "%-20s %-10d %-10d\n", p->name, p->score, p->difficulty);
    fclose(lb);
}
