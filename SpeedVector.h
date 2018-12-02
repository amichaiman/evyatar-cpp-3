//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_SPEEDVECTOR_H
#define EVYATAR_CPP_3_SPEEDVECTOR_H


class Point;
class SpeedVector {
public:
    SpeedVector(double speedX, double speedY);
    SpeedVector();
    virtual ~SpeedVector();
    double speedX, speedY;
    void printInfo();
    SpeedVector& operator*(double n);
    SpeedVector& operator+(double n);
    SpeedVector& operator+(Point &rhs);
};


#endif //EVYATAR_CPP_3_SPEEDVECTOR_H
