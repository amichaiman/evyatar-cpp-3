//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_POINT_H
#define EVYATAR_CPP_3_POINT_H


class SpeedVector;

class Point {
public:
    Point(double x, double y);
    Point();
    virtual ~Point();
    static const int UNINITIALIZED = -1;

    double x,y;
    void printInfo();
    double getDistanceFrom(Point point) const;
    Point& operator-(Point &rhs);
    Point& operator+(SpeedVector &rhs);
    Point& operator*(double n);

    int getPrecision(double x);
};


#endif //EVYATAR_CPP_3_POINT_H
