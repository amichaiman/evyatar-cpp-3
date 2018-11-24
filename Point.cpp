//
// Created by amichai on 24/11/18.
//

#include <iostream>
#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x(x), y(y) {}

Point::Point() {}

Point::~Point() {

}

void Point::printInfo() {
    std::cout << "x: " << x << " y: " << y << std::endl;
}

double Point::getDistanceFrom(Point point) {
    return sqrt(pow(x-point.x,2)+pow(y-point.y,2));
}
