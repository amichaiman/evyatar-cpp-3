//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_POINT_H
#define EVYATAR_CPP_3_POINT_H


class Point {
public:
    Point(double x, double y);
    Point();
    virtual ~Point();

    double x,y;

    void printInfo();

    double getDistanceFrom(Point point);
};


#endif //EVYATAR_CPP_3_POINT_H
