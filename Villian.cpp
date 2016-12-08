//Villian.cpp
#include "Villains.h"
#include "User.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Villains::Skeleton::attack(User&)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   enemy.hp-=damage;
   return damage;
}
void Villains::Skeleton::setHealth()
{
	m_enemyhealth = 10;
}

void Villains::Skeleton::setDamage()
{
	m_enemydamage= 3;
}



void Villains::Wolf::attack(User&)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   enemy.hp-=damage;
   return damage;
}

void Villains::Wolf::setHealth()
{
	m_enemyhealth=15;
}
void Villains::Wolf::setDamage()\
{
	m_enemydamage= 4;
}
void Villains::Centaur::attack(User&)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   User.health() -=damage;
   return damage;
}
void Villains::Centaur::setHealth()
{
	m_enemyhealth = 25;
}

void Villains::Centaur::setDamage()
{
	m_enemydamage=6;
}
void Villains::Dragon::attack(User&)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   enemy.hp-=damage;
   return damage;
}
void Villains::Dragon::setHealth()
{
	m_enemyhealth=40;
}
void Villains::Dragon::setDamage()
{
	m_enemydamage=10;
}
Villains::Villains(string enemyname, int enemyhealth, int enemydamage)
{
  name=enemyname;
  health=enemyhealth;
  damage=enemydamage;
}

     
     
