//
// Created by amichai on 24/11/18.
//

#ifndef EVYATAR_CPP_3_SPOT_H
#define EVYATAR_CPP_3_SPOT_H

class Spot {
public:
    Spot& operator++(int);
    Spot& operator--();

    void setNumberOfPlayers(int n);

    int getNumberOfPlayers();

private:
    int numOfPlayers;
};


#endif //EVYATAR_CPP_3_SPOT_H
