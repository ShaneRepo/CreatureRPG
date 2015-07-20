#include "Human.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Human::Human()
{
    name = "Basic Human";
    strength = 25;
    hitpoints = 100;
}
Human::Human(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Human";
}
int Human::getDamage()
{
    srand (time(NULL));
    int damage = Creature::getDamage();

    return damage;
}
