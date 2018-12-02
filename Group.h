//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_GROUP_H
#define EVYATAR_CPP_3_GROUP_H


#include "Player.h"
#include "Point.h"
#include <fstream>
using namespace std;

class Group {
public:
    const Point &getObjective() const;
    void setObjective(const Point &objective);
    int getNumOfPlayers() const;

    bool init(char *fileName);
    virtual ~Group();
    void printInfo();

    Player *getPlayers() const;

    void update();
private:
    Player *players;
    Player *globalBest;
    Point objective;
    int numOfPlayers;

    bool goodFileState(const std::ifstream &file);
    void updateGlobalBest();
};


#endif //EVYATAR_CPP_3_GROUP_H
