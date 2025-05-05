/*
16/04/25    Elijah Provis
ver 1   game won or lost
*/
#include <stdio.h>
#include <stdlib.h>
#include "gengrid.h"
#include "introleaderboard.h"
#include "structures.h"
#include "global.h"
void gameend(player *p, asteroid astero) {
    if (p->x < 0 || p->x >= GRID_SIZE || p->y < 0 || p->y >= GRID_SIZE){
        printf("Out of bounds! You are now lost in deep space!\n");
        leaderboard(p);
        exit(0);
    }else if (p->fuel <= 0) {
        printf("You have ran out of fuel and are now lost in deep space for eternity!\n");
        leaderboard(p);
        exit(0);
    }else if (p->health <= 0) {
        printf("Your ship has taken too much damage! Your ship has exploded and game over!\n");
        leaderboard(p);
        exit(0);
    }else if (p->x == astero.x && p->y == astero.y ) {
        printf("You have collided with an astoid and died on impact!\n");
        leaderboard(p);
        exit(0);
    }else if (p->turns <= 0) {
        printf("you have survived the torments of space!! Well done space captain!");
        leaderboard(p);
        exit(0);
    }
}
