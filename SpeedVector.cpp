//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include "SpeedVector.h"

SpeedVector::SpeedVector(double speedX, double speedY) : speedX(speedX), speedY(speedY) {}

SpeedVector::SpeedVector() {

}

SpeedVector::~SpeedVector() {

}

void SpeedVector::printInfo() {
    std::cout << "x: " << speedX << " y: " << speedY << std::endl;
}
