//
// Created by amichai on 24/11/18.
//

#include "Arena.h"
#include "Limits.h"

void Arena::update(Group &group) {
    for (int i=Limits::X_MIN; i < Limits::X_MAX; i++){
        for (int j=Limits::Y_MIN; j<Limits::Y_MAX; j++){
            arena[i][j].setNumberOfPlayers(0);
            for (int k=0; k<group.getNumOfPlayers(); k++){
                if (isPointInSpot(i,j, group.getPlayers()[k].getCurrentLocation())){
                    arena[i][j]++;
                    if (isPointInSpot(i,j,group.getObjective())){
                        objectiveReached = true;
                    }
                }
            }
        }
    }
}

Arena::Arena() : objectiveReached(false) {}

bool Arena::isObjectiveReached(){
    return objectiveReached;
}
void Arena::setPlayers(Group *players) {
    Arena::players = players;
}

bool Arena::isPointInSpot(int i, int j, Point p) const {
   return p.x >= i && p.x < i+1 &&
         p.y >= j && p.y < j+1;
}

int Arena::operator()(int i, int j) {
    return arena[i][j].getNumberOfPlayers();
}
