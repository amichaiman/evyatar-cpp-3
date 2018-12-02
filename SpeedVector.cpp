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

SpeedVector &SpeedVector::operator*(double n) {
    speedX *= n;
    speedY *= n;
    return *this;
}

SpeedVector &SpeedVector::operator+(double n) {
    speedX += n;
    speedY += n;
    return *this;
}

SpeedVector &SpeedVector::operator+(Point &rhs) {
    speedX += rhs.x;
    speedY += rhs.y;
    return *this;
}
