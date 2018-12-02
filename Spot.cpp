//
// Created by amichai on 24/11/18.
//

#include "Spot.h"

Spot &Spot::operator--() {
    numOfPlayers--;
    return *this;
}

Spot &Spot::operator++(int) {
    numOfPlayers++;
    return *this;
}

void Spot::setNumberOfPlayers(int n) {
    numOfPlayers = 0;
}

int Spot::getNumberOfPlayers() {
    return numOfPlayers;
}
