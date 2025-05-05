//
// Created by elija on 02/05/2025.
//

#ifndef PLAYERCHOICE_H
#define PLAYERCHOICE_H
#include "structures.h"

void playerchoice(player *p);
void playername (player *p);
void collision(player *p);
void turncounter(int i, player *p);
void difficulty (player *p);
void gameend(player *p, asteroid astero);


#endif //PLAYERCHOICE_H
