//
// Created by amichai on 24/11/18.
//

#include <fstream>
#include <iostream>
#include <stdint.h>
#include "Group.h"
#include "Limits.h"

const Point &Group::getObjective() const {
    return objective;
}

void Group::setObjective(const Point &objective) {
    Group::objective = objective;
}

int Group::getNumOfPlayers() const {
    return numOfPlayers;
}

bool Group::init(char *fileName) {
    std::ifstream file;
    file.open(fileName, std::ios::in);

    if (!file.is_open()){
        return false;
    }
    int numOfPlayers;
    file >> numOfPlayers;

    if (!goodFileState(file)) {
        return false;
    }

    if (numOfPlayers < Limits::MIN_PLAYERS || numOfPlayers > Limits::MAX_PLAYERS) {
        return false;
    }

    Group::numOfPlayers = numOfPlayers;
    players = new Player[numOfPlayers];

    Point p;
    SpeedVector v;
    for (int i=0; i<numOfPlayers; i++){
        file >> p.x >> p.y >> v.speedX >> v.speedY;
        if (!goodFileState(file)) {
            return false;
        }
        if (!Limits::inArena(p)){
            return false;
        }
        players[i].setCurrentLocation(p, objective);
        players[i].setSpeedVector(v);
        players[i].setId(i);
    }
    updateGlobalBest();
    return true;
}

bool Group::goodFileState(const std::ifstream &file) {
    return !(file.fail() || !file.good() || file.bad() || file.eof());
}

Group::~Group() {
    delete[] players;
}

void Group::printInfo() {
    for (int i=0; i<numOfPlayers; i++){
        players[i].printInfo();
    }
}

void Group::update() {
    for (int i=0; i<numOfPlayers; i++){
        players[i].update(objective, *globalBest);
    }
    updateGlobalBest();
}

void Group::updateGlobalBest() {
    double currentDistance;
    double shortestDistance = INT32_MAX;
    for (int i=0; i<numOfPlayers; i++){
        currentDistance = players[i].getCurrentLocation().getDistanceFrom(objective);
        if (currentDistance < shortestDistance){
            shortestDistance = currentDistance;
            globalBest = &players[i];
        }
    }
}

Player *Group::getPlayers() const {
    return players;
}
