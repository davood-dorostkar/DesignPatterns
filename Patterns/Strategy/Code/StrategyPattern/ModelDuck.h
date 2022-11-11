#ifndef MODELDUCK_H
#define MODELDUCK_H
#include <Duck.h>
#include <Quack.h>
#include <FlyNoWay.h>
class ModelDuck : public Duck
{
public:
    flyBehavior = new FlyNoWay();
    quackBehavior = new Quack();
    void display()
    {
        std::cout << "I am a model duck" << std::endl;
    }
};
#endif // MODELDUCK_H
