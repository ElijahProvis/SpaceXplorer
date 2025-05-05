/*
16/04/25    Elijah Provis
ver 1   player entry
*/

#include <stdio.h>
#include "structures.h"
#include "global.h"

void playerchoice(player *p) {
    char c,d;
    printf("Move player in which direction or convert junk? (w/a/s/d/e): ");
    scanf(" %c", &c);
    switch (c) {
        case 'w':
            p->y -= 1;
        p->fuel -= 2;
        break;
        case 'a':
            p->x -= 1;
        p->fuel -= 2;
        break;
        case 's':
            p->y += 1;
        p->fuel -= 2;
        break;
        case 'd':
            p->x += 1;
        p->fuel -= 2;
        break;
        case 'e':
            printf("Convert junk to fuel (2 junk) (f) or health (4 junk) (h)? ");
        scanf(" %c", &d);
        switch (d) {
            case 'f':
                if (p->junk >= 2) {
                    p->junk -= 2;
                    p->fuel += 20;
                    printf("generated +20 fuel!\n");
                } else {
                    printf("Not enough junk!\n");
                }
            break;
            case 'h':
                if (p->junk >= 4) {
                    p->junk -= 4;
                    p->health += 10;
                    printf("generated +10 health\n!");
                } else {
                    printf("Not enough junk!\n");
                }
            break;
            default:
                printf("Invalid conversion option!\n");
        }
        break;
        default: printf("Invalid choice!\n");
        break;
    }
}
