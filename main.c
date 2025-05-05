#include "gengrid.h"
#include "playerevent.h"
#include "spawn.h"
#include "introleaderboard.h"
#include "global.h"


int main() {
    srand(time(NULL));
    intro();
    playername(&p);
    difficulty(&p);
    spawnplayer(&p);
    intgrid();
    spawnasteroid();
    initobjects();
    for (int i = 0; i < 999; i++) {
        turncounter(i, &p);
        printgrid(&p, junkarray, alienarray, astro);
        printstats(&p);
        playerchoice(&p);
        moveastroid();
        gameend(&p,astro);
        spawnobjects(i);
        collision(&p);
    }
    return 0;
}
