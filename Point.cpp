//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include "Point.h"
#include "SpeedVector.h"
#include <cmath>
#include <iomanip>

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point()
:x(UNINITIALIZED), y(UNINITIALIZED) {}

Point::~Point() {

}

void Point::printInfo() {
    std::cout << std::fixed << std::setprecision(getPrecision(x)) << x << " " << std::setprecision(getPrecision(x)) << y << std::endl;
}

int Point::getPrecision(double n) {
    if (floor(n) == n) {
        return 0;
    }
    if (floor(n * 10) == n * 10) {
        return 1;
    }
    return 2;
}

double Point::getDistanceFrom(Point point) const{
    return sqrt(pow(x-point.x,2)+pow(y-point.y,2));
}

Point &Point::operator-(Point &rhs) {
    x -= rhs.x;
    y -= rhs.y;
    return *this;
}

Point &Point::operator*(double n) {
    x *= n;
    y *= n;
    return *this;
}

Point &Point::operator+(SpeedVector &rhs) {
    x += rhs.speedX;
    y += rhs.speedY;
    return *this;
}

