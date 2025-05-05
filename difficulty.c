/*
16/04/25    Elijah Provis
ver 1   player difficulty
*/
#include <stdio.h>
#include "spawn.h"
#include "structures.h"
#include "global.h"

void difficulty (player *p) {
    p->difficulty = 0;
    printf("Please enter your difficulty (0-2) : ");
    scanf("%d", &p->difficulty);
    if (p->difficulty == 0) {
        for (int i = 0; i < 10; i++) {
            junkarray[i].numberofjunk = 2;
            junkarray[i].points = 15;
            alienarray[i].points = 150;
            alienarray[i].damage=10;
            p->health = 150;
            p->fuel=150;
        }
    }else if (p->difficulty == 1) {
        for (int i = 0; i < 10; i++) {
            junkarray[i].numberofjunk = 1;
            junkarray[i].points = 12;
            alienarray[i].points = 125;
            alienarray[i].damage = 15;
            p->health = 125;
            p->fuel=125;
        }
    }else if (p->difficulty == 2) {
        for (int i = 0; i < 10; i++) {
            junkarray[i].numberofjunk = 1;
            junkarray[i].points = 10;
            alienarray[i].points = 100;
            alienarray[i].damage = 20;
            p->health = 100;
            p->fuel=100;
        }
    }else {
        printf("You did not enter a valid difficulty level, defulting to 0: ");
    }
}