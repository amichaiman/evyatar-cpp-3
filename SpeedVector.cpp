//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include "SpeedVector.h"
#include "Point.h"

SpeedVector::SpeedVector(double speedX, double speedY) : speedX(speedX), speedY(speedY) {}

SpeedVector::SpeedVector() {

}

SpeedVector::~SpeedVector() {

}

void SpeedVector::printInfo() {
    std::cout << "x: " << speedX << " y: " << speedY << std::endl;
}

SpeedVector SpeedVector::operator*(const double n) const {
    SpeedVector newSpeedVector;
    newSpeedVector.speedX = speedX*n;
    newSpeedVector.speedY = speedY*n;
    return newSpeedVector;
}

SpeedVector SpeedVector::operator+(const double n) const {
    SpeedVector newSpeedVector;
    newSpeedVector.speedX = speedX+n;
    newSpeedVector.speedY = speedY+n;
    return newSpeedVector;
}

SpeedVector SpeedVector::operator+(const Point &rhs) const {
    SpeedVector newSpeedVector;
    newSpeedVector.speedX = speedX+rhs.x;
    newSpeedVector.speedY = speedY+rhs.y;
    return newSpeedVector;
}
