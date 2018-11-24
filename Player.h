//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_PLAYER_H
#define EVYATAR_CPP_3_PLAYER_H


#include "Point.h"
#include "SpeedVector.h"

class Player {
private:
    int id;
    Point currentLocation;
    SpeedVector speed;
public:
    void setCurrentLocation(Point point);
    void setSpeedVector(SpeedVector vector);
    void setId(int i);
    void printInfo();

    void update();

    double getDistanceFromPoint(Point point);
};


#endif //EVYATAR_CPP_3_PLAYER_H
