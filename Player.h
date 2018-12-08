//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_PLAYER_H
#define EVYATAR_CPP_3_PLAYER_H


#include "Point.h"
#include "SpeedVector.h"

class Player {
public:
    Player();
    void setCurrentLocation(Point point, Point objective);
    void setSpeedVector(SpeedVector &vector);
    void setId(int i);
    void printInfo();
    void update(Point &objective, Player &globalBest);
    const Point &getCurrentLocation() const;

private:
    int id;
    Point currentLocation;
    Point personalBest;
    SpeedVector speed;

    bool isPersonalBest(Point &newPoint, Point &objective) const;
    double r();

    SpeedVector getNewSpeed(Player &globalBest);
};


#endif //EVYATAR_CPP_3_PLAYER_H
