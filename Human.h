#ifndef HUMAN_H
#define HUMAN_H

#include <Creature.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
class Human : public Creature
{
    private:
        int strength;
        int hitpoints;
        string name;
    public:
        Human();
        Human(int,int);
        int getDamage();
};

#endif // HUMAN_H
