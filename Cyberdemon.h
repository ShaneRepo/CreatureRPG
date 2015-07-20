#ifndef CYBERDEMON_H
#define CYBERDEMON_H

#include <Demon.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
class Cyberdemon : public Demon
{
    private:
        int strength;
        int hitpoints;
        string name;
    public:
        Cyberdemon();
        Cyberdemon(int,int);
        int getDamage();

};

#endif // CYBERDEMON_H
