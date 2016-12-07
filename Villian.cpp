//Villian.cpp
#include "Villain.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Villains::attack(User& enemy)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   enemy.hp-=damage;
   cout<<"You are attacked by the"<<Villains<<"!"<<endl;
   cout<<"You have lost"<<damage<<"HP."<<endl;
   return damage; 
}

Villains::Villains(string enemyname, int enemyhealth, int enemydamage)
{
  name=enemyname;
  hp=enemyhealth;
  damage=enemydamage;
}
     
     
