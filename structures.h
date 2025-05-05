
#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct{
    int x;
    int y;
    int score;
    int fuel;
    int junk;
    int health;
    char name[40];
    int turns;
    int difficulty;
}player;

typedef struct {
    int x;
    int y;
    int points;
    int numberofjunk;
}junk;

typedef struct {
    int x;
    int y;
    int points;
    int damage;
}aliens;

typedef struct {
    int x;
    int y;
    int direction;
}asteroid;

#endif //STRUCTURES_H
