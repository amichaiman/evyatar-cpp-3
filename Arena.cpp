//
// Created by amichai on 24/11/18.
//

#include "Arena.h"
#include "Limits.h"

void Arena::update() {
    for (int i=Limits::X_MIN; i < Limits::X_MAX; i++){
        for (int j=Limits::Y_MIN; j<Limits::Y_MAX; j++){
            if (arena[i][j].hasPlayer(players)) {
                arena[i][j]++;
            }
        }
    }
}

void Arena::setPlayers(Group *players) {
    Arena::players = players;
}
