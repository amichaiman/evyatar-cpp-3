//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_SPEEDVECTOR_H
#define EVYATAR_CPP_3_SPEEDVECTOR_H


class SpeedVector {
public:
    SpeedVector(double speedX, double speedY);
    SpeedVector();
    virtual ~SpeedVector();

    double speedX, speedY;

    void printInfo();
};


#endif //EVYATAR_CPP_3_SPEEDVECTOR_H
