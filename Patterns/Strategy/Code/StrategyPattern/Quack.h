#ifndef QUACK_H
#define QUACK_H
#include <iostream>
#include <QuackBehavior.h>
class Quack : public QuackBehavior
{
private:
public:
    Quack();
    ~Quack();
    void quack();
};

void Quack::quack()
{
    std::cout << "Quacking" << std::endl;
}
#endif // QUACK_H
