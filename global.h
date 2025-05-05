
#ifndef GLOBAL_H
#define GLOBAL_H
#include "structures.h"
#include "gengrid.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
extern char grid[GRID_SIZE][GRID_SIZE];
extern player p;
extern junk junkarray[10];
extern aliens alienarray[10];
extern asteroid astro;
extern int junkcount ;
extern int aliencount ;

#endif //GLOBAL_H
