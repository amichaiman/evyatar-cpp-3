//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_GROUP_H
#define EVYATAR_CPP_3_GROUP_H


#include "Player.h"
#include "Point.h"

class Group {
public:
    const Point &getObjective() const;
    void setObjective(const Point &objective);
    int getNumOfPlayers() const;
    void setNumOfPlayers(int numOfPlayers);

    bool init(char *fileName);

    virtual ~Group();

    void printInfo();

    void update();

private:
    Player *players;
    Point objective;
    int numOfPlayers;
    int leaderId;

    bool goodFileState(const std::ifstream &file);

    int computeLeaderId();
};


#endif //EVYATAR_CPP_3_GROUP_H
