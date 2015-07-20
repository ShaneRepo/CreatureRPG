// RPG
#include <iostream>
#include <cstdlib>
#include <time.h>
#include"Creature.h"
#include"Demon.h"
#include "Elf.h"
#include "Human.h"
#include "Cyberdemon.h"
#include "Balrog.h"
using namespace std;
void battleArena(Creature &c1, Creature &c2);
int main()
{
    Balrog b1;
    b1.setHitPoints(65);
    b1.setStrength(12);
    cout << b1.getHitPoints() << endl; // showing the gets and sets work
    cout << b1.getStrength() << endl;
    b1.getDamage(); // damage works on each level of the  inheritance hierarchy

    Cyberdemon cd1;
    cd1.setHitPoints(75);
    cd1.setStrength(54);
    cout << cd1.getHitPoints() << endl;
    cout << cd1.getStrength() << endl;
    cd1.getDamage();

    Human h1;
    h1.setHitPoints(100);
    h1.setStrength(25);
    cout << h1.getHitPoints() << endl;
    cout << h1.getStrength() << endl;
    h1.getDamage();

    Elf e1;
    e1.setHitPoints(80);
    e1.setStrength(14);
    cout << e1.getHitPoints() << endl;
    cout << e1.getStrength() << endl;
    e1.getDamage();

    Demon d1;
    d1.setHitPoints(125);
    d1.setStrength(34);
    cout << d1.getHitPoints() << endl;
    cout << d1.getStrength() << endl;
    d1.getDamage();

    Creature c1(25,50); // constructor works
    c1.setHitPoints(50);
    c1.setStrength(24);
    cout << c1.getHitPoints() << endl; // showing the gets and sets work
    cout << c1.getStrength() << endl;
    c1.getDamage();

    battleArena(d1,e1); // showing the arena functions
    return 0;
}
void battleArena(Creature &c1, Creature &c2)  // arena function
{
    int dam1 = 0;
    int hp1 = 0;
    int dam2 = 0;
    int hp2 = 0;
    bool isDead = false;
    do
    {
        dam1 = c1.getDamage();
        hp2 = (c2.getHitPoints() - dam1);
        if (hp2 < 1)
        {
            cout << c1.getName() << " Is victorious! " << endl;
            isDead = true;
            exit(0);
        }
        c2.setHitPoints(hp2);
        dam2 = c2.getDamage();
        hp1 = (c1.getHitPoints() - dam2);
        if (hp1 < 1)
        {
            cout << c2.getName() << " Is victorious! " << endl;
            isDead = true;
            exit(0);
        }
        c1.setHitPoints(hp2);
    }while(isDead == false);

}
