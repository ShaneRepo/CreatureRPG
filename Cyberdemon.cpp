#include "Cyberdemon.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Cyberdemon::Cyberdemon()
{
    name = "Basic Cyberdemon";
    strength = 54;
    hitpoints = 75;
}
Cyberdemon::Cyberdemon(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Cyberdemon";
}
int Cyberdemon::getDamage()
{
    srand (time(NULL));
    int damage = Demon::getDamage();
    return damage;
}
