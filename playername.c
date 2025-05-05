/*
16/04/25    Elijah Provis
ver 1   player name entry
*/
#include <stdio.h>
#include "structures.h"
#include "global.h"

void playername (player *p) {
    printf("\nPlease enter your name: ");
    scanf("%s", p->name);
}
