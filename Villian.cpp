/*
 * Villains.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: Vincent
 */

#include "Villains.h"
#include "User.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int Skeleton::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   return damage;
}
void Skeleton::setHealth()
{
	m_enemyHealth = 10;
}





int Wolf::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   return damage;
}

void Wolf::setHealth()
{
	m_enemyHealth=15;
}

int Centaur::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp -=damage;
   return damage;
}
void Centaur::setHealth()
{
	m_enemyHealth = 25;
}


int Dragon::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   return damage;
}
void Dragon::setHealth()
{
	m_enemyHealth=40;
}
