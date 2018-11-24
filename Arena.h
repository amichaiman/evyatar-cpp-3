//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_ARENA_H
#define EVYATAR_CPP_3_ARENA_H


#include "Point.h"
#include "Limits.h"
#include "Spot.h"
#include "Group.h"

class Arena {
public:
    void update();
private:
public:
    void setPlayers(Group *players);

private:
    Spot arena[Limits::X_MAX][Limits::Y_MAX];
    Group *players;
};


#endif //EVYATAR_CPP_3_ARENA_H
