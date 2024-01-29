#ifndef RANDOMIZER_H
#define RANDOMIZER_H

#include <random>
#include <iostream>

#define LOWER_BOUND 0.00001
#define UPPER_BOUND 20.0

class Randomizer
{
public:
    static double GetValue();
};

#endif