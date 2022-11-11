#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include <FlyBehavior.h>
#include <QuackBehavior.h>

class Duck
{
private:
public:
    Duck();
    ~Duck();
    FlyBehavior flyBehavior;
    QuackBehavior quackBehavior;
    void performFly();
    void performQuack();
    void swim();
    void display();
    void setFlyBehavior(FlyBehavior fb);
    void setQuackBehavior(QuackBehavior qb);
};
void Duck::performFly()
{
    flyBehavior.fly();
}
void Duck::performQuack()
{
    quackBehavior.quack();
}
void Duck::setFlyBehavior(FlyBehavior fb)
{
    flyBehavior = fb;
};
void Duck::setQuackBehavior(QuackBehavior qb)
{
    quackBehavior = qb;
};
void Duck::swim()
{
    std::cout << "swimming" << std::endl;
}
void Duck::display()
{
    std::cout << "I am a duck" << std::endl;
}
#endif // DUCK_H
