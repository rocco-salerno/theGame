//Villian.cpp
#include "Villain.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Villains::attack(User& enemy)
{
   enemy.hp-=damage;
   cout<<"You are attacked by the"<<Villains<<"!"<<endl;
   cout<<"You have lost"<<damage<<"HP."<<endl;
}

Villains::Villains(string enemyname, int enemyhealth, int enemydamage)
{
  name=enemyname;
  hp=enemyhealth;
  damage=enemydamage;
}
     
     
