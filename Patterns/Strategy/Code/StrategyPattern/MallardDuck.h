#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include <Duck.h>
#include <Quack.h>
#include <FlyWithWings.h>
class MallardDuck : public Duck
{
public:
flyBehavior = new FlyWithWings();
quackBehavior = new Quack();
void display()
{
    std::cout << "I am a mallard duck" << std::endl;
}
};

#endif // MALLARDDUCK_H
