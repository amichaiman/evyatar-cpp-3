//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Limits.h"

void Player::setCurrentLocation(Point point, Point objective) {
    if (point.x < Limits::X_MIN) {
        point.x = Limits::X_MIN;
    } else if (point.x > Limits::X_MAX) {
        point.x = Limits::X_MAX;
    }
    if (point.y < Limits::Y_MIN) {
        point.y = Limits::Y_MIN;
    } else if (point.y > Limits::Y_MAX) {
        point.y = Limits::Y_MAX;
    }
    if (isPersonalBest(point, objective)){
        personalBest = point;
    }
    currentLocation = point;
}

void Player::setSpeedVector(SpeedVector &vector) {
    speed = vector;
}

void Player::setId(int i) {
    id = i;
}

void Player::printInfo() {
    currentLocation.printInfo();
}

void Player::update(Point &objective, Player &globalBest) {
    SpeedVector newSpeed = getNewSpeed(globalBest);
    setCurrentLocation(currentLocation+speed, objective);
    speed = newSpeed;
}

const Point &Player::getCurrentLocation() const {
    return currentLocation;
}

Player::Player(){ }

bool Player::isPersonalBest(Point &newPoint, Point &objective) const{
    return (personalBest.x == Point::UNINITIALIZED && personalBest.y == Point::UNINITIALIZED) ||
            newPoint.getDistanceFrom(objective) < currentLocation.getDistanceFrom(objective);
}

SpeedVector Player::getNewSpeed(Player &globalBest) {
    return (speed*0.25) + (personalBest-currentLocation)*r() + (globalBest.getCurrentLocation()-currentLocation)*r();
}

double Player::r() {
    return rand()/static_cast<double>(RAND_MAX);
}
