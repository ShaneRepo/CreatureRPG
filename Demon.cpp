#include "Demon.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Demon::Demon()
{
    name = "Basic Demon";
    strength = 34;
    hitpoints = 125;
}
Demon::Demon(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Demon";
}
int Demon::getDamage()
{
    srand (time(NULL));
    Creature::getDamage();
    int damage;
        if ((rand() % 100) < 5 )
         {
            damage = damage + 50;
            cout << "Demonic attack inflicts 50 additional damage points!" << endl;
         }
    return damage;
}
