#include "Elf.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
Elf::Elf()
{
    name = "Basic Elf";
    strength = 14;
    hitpoints = 80;
}
Elf::Elf(int newS,int newHp)
{
    strength = newS;
    hitpoints = newHp;
    name = "Basic Elf";
}
int Elf::getDamage()
{
    srand (time(NULL));
    int damage = Creature::getDamage();
        if ((rand() % 10) == 0 )
         {
            damage = damage * 2;
            cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
         }
    return damage;
}
