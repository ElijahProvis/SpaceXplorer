/*
16/04/25    Elijah Provis
ver 1   initialise grid
*/
#include "gengrid.h"
#include "global.h"




void intgrid() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j] = '.';
        }
    }
}