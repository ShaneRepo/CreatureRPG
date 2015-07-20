#ifndef BALROG_H
#define BALROG_H

#include <Demon.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

class Balrog : public Demon
{
    private:
        int strength;
        int hitpoints;
        string name;
    public:
        Balrog();
        Balrog(int,int);
        int getDamage();

};

#endif // BALROG_H
