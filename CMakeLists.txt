cmake_minimum_required(VERSION 3.30)
project(SpaceXplorer C)

set(CMAKE_C_STANDARD 99)

add_executable(SpaceXplorer main.c
        collision.c
        difficulty.c
        global.c
        initobjects.c
        intgrid.c
        intro.c
        leaderboard.c
        gameend.c
        moveasteroid.c
        playerchoice.c
        playername.c
        printgrid.c
        spawnasteroid.c
        spawnobj.c
        spawnplayer.c
        stats.c
        turncounter.c
        gengrid.h
        global.h
        introleaderboard.h
        playerevent.h
        spawn.h
        structures.h)
