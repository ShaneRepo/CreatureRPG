#ifndef DEMON_H
#define DEMON_H

#include <Creature.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
class Demon : public Creature
{
    private:
        int strength;
        int hitpoints;
        string name;
    public:
        Demon();
        Demon(int,int);
        int getDamage();


};

#endif // DEMON_H
