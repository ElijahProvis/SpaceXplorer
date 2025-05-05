//
// Created by elija on 02/05/2025.
//

#ifndef GENGRID_H
#define GENGRID_H
#define GRID_SIZE 20
#include "structures.h"


extern char grid[GRID_SIZE][GRID_SIZE];
void intgrid();
void printgrid(player *p, junk junkarray[], aliens alienarray[], asteroid astero);
void printstats(player *p);
#endif //GENGRID_H
