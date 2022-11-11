#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H
#include <iostream>
#include <FlyBehavior.h>
class FlyRocketPowered : public FlyBehavior
{
    void fly()
    {
        std::cout << "I am flying with a rocket" << std::endl;
    }
};

#endif // FLYROCKETPOWERED_H
