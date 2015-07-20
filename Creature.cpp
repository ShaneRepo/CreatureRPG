#include "Creature.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
Creature::Creature()
{
    name = "Basic Creature";
    strength = 24;
    hitpoints = 50;
}
Creature::Creature(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Creature";
}
string Creature::getName()
{
    return name;
}
void Creature::setStrength(int s)
{
    strength = s;
}
void Creature::setHitPoints(int hp)
{
    hitpoints = hp;
}
int Creature::getStrength()
{
    return strength;
}
int Creature::getHitPoints()
{
    return hitpoints;
}
int Creature::getDamage()
{
    srand (time(NULL));
    int damage;
    damage = (rand() % strength) + 1;
    cout << " Basic attack for: " << damage << " points!" << endl;
    return damage;
}
