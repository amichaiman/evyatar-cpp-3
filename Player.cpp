//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include "Player.h"

void Player::setCurrentLocation(Point point) {
    currentLocation = point;
}

void Player::setSpeedVector(SpeedVector vector) {
    speed = vector;
}

void Player::setId(int i) {
    id = i;
}

void Player::printInfo() {
    std::cout << "location is ";
    currentLocation.printInfo();
    std::cout << "and speed is ";
    speed.printInfo();
}

void Player::update() {
//    currentLocation.x = getNewLocation(); //to be done
//    currentLocation.y = getNewLocation(); //to be done
}

double Player::getDistanceFromPoint(Point point) {
    return currentLocation.getDistanceFrom(point);
}
