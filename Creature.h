#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class Creature
{
private:
    int strength;
    int hitpoints;
    string name;
public:
    Creature();
    Creature(int,int);
    void setStrength(int);
    void setHitPoints(int);
    int getStrength();
    int getHitPoints();
    virtual int getDamage();
    string getName();
};

#endif // CREATURE_H
