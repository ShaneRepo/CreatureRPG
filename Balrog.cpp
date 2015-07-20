#include "Balrog.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

Balrog::Balrog()
{
    name = "Basic Balrog";
    strength = 12;
    hitpoints = 65;
}
Balrog::Balrog(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Balrog";
}
int Balrog::getDamage()
{
    srand (time(NULL));
    int damage = Demon::getDamage();
    int damage2 = Demon::getDamage();
    return damage * 2;
}
