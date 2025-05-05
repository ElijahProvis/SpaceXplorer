#include "spawn.h"
#include "gengrid.h"
#include "global.h"
void moveastroid() {
    // Move based on current direction
    switch (astro.direction) {
        case 0: // right
            astro.x += 1;
        break;
        case 1: // left
            astro.x -= 1;
        break;
        case 2: // up
            astro.y -= 1;
        break;
        case 3: // down
            astro.y += 1;
        break;
    }
    // If asteroid moves out of bounds
    if (astro.x < 0 || astro.x >= GRID_SIZE || astro.y < 0 || astro.y >= GRID_SIZE) {
        spawnasteroid();
    }
}
