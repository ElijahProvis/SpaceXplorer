/*
16/04/25    Elijah Provis
ver 1   printgrid
*/

#include <stdio.h>
#include "structures.h"
#include "gengrid.h"
#include "global.h"

void printgrid(player *p, junk junkarray[], aliens alienarray[], asteroid astero) {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            int printed = 0;
            //print player
            if (i == p->y && j == p->x) {
                printf("0 ");
                printed = 1;
            }
            //print junk
            for (int k = 0; k < 10 && !printed; k++) {
                if (junkarray[k].x == j && junkarray[k].y == i) {
                    printf("* ");
                    printed = 1;
                }
            }
            //print aliens
            for (int k = 0; k < 10 && !printed; k++) {
                if (alienarray[k].x == j && alienarray[k].y == i) {
                    printf("@ ");
                    printed = 1;
                }
            }
            //print asteroid
            if (j == astero.x && i == astero.y ) {
                printf("A ");
                printed = 1;
            }
            //if empty print grid
            if (!printed) {
                printf(". ");
            }
        }
        //new line of grid
        printf("\n");
    }
}
