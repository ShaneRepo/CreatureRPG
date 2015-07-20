#ifndef ELF_H
#define ELF_H

#include <Creature.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
class Elf : public Creature
{
    private:
        int strength;
        int hitpoints;
        string name;
    public:
        Elf();
        Elf(int,int);
        int getDamage();


};

#endif // ELF_H
