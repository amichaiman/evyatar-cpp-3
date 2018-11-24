//
// Created by amichai on 24/11/18.
//

#include "Limits.h"

bool Limits::inArena(Point p) {
    return p.x >= Limits::X_MIN && p.y >= Limits::Y_MIN && p.x <= Limits::X_MAX && p.y <= Limits::Y_MAX;
}
