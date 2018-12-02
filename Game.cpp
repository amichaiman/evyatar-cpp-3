//
// Created by amichai on 24/11/18.
//

#include "Game.h"
#include "Limits.h"
#include <iostream>
#include <fstream>

Game::Game() {
    arena.setPlayers(&players);
}

void Game::start() {
    int iteration;
    for (iteration=0; iteration < numOfIterations; iteration++){
        players.update();
        arena.update(players);
        if (arena.isObjectiveReached()){
            break;
        }
    }
    std::cout << "game ended after " << iteration << std::endl;
    players.printInfo();
}

bool Game::config(char *fileName) {
    std::ifstream file;
    file.open(fileName, std::ios::in);

    if (!file.is_open()){
        return false;
    }
    Point p;
    file >> p.x >> p.y;
    if (!goodFileState(file)) {
        return false;
    }

    if (!Limits::inArena(p)) {
        return false;
    }
    players.setObjective(p);

    int numOfIterations;
    file >> numOfIterations;

    if (!goodFileState(file)) {
        return false;
    }

    if (numOfIterations < Limits::MIN_ITERATIONS || numOfIterations > Limits::MAX_ITERATIONS){
        return false;
    }
    Game::numOfIterations = numOfIterations;
    return true;
}

bool Game::init(char *fileName) {
    return players.init(fileName);
}

bool Game::goodFileState(const std::ifstream &file) {
    return !(file.fail() || !file.good() || file.bad() || file.eof());
}

