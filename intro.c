/*
16/04/25    Elijah Provis
ver 1   print introfile
*/
#include <stdio.h>
#include "global.h"


void intro() {
    FILE *intro;
    char line[256];  // Buffer to hold each line from the file
    intro = fopen("intro.txt", "r");
    while (fgets(line, sizeof(line), intro) != NULL) {
        printf("%s", line);
    }
    fclose(intro);
}
