#include "Villains.h"
#include "User.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Villains::~Villains(){
	delete this;
}
void Villains::setHealth(int health)
{
	m_enemyHealth= health;
}


int Skeleton::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   cout<<"Skeleton attacked with: "<<damage<<endl;
   return damage;
}

int Wolf::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   cout<<"Wolf attacked with: "<<damage<<endl;
   return damage;
}


int Centaur::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp -=damage;
   cout<<"Centaur attacked with: "<<damage<<endl;
   return damage;
}
int Dragon::attack(User& user)
{
   srand(time(NULL));
	int damage = rand()%6 +5;
   user.m_hp-=damage;
   cout<<"Dragon attacked with: "<<damage<<endl;
   return damage;
}
