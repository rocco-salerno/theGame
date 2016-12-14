#include "Villian.h"
#include "User.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

Villains::~Villains(){
	delete this;
}
void Villains::setHealth(int health) //Set health of enemies in main gameplay file.
{
	m_enemyHealth= health;
}


int Skeleton::attack(User& user) //Give enemies value and way to attack the user. Done for all subclasses.
{
   int damage = rand()%6 +5; //Declares how much damage an enemy will land on the user. Random integer between 5 and 11.
   user.m_hp-=damage;  //Subtract health from user depending on how much damage the enemy did.
   cout<<"Skeleton attacked with: "<<damage<<endl; //Print how much HP the enemy has left.
   return damage;
}

int Wolf::attack(User& user)
{
   int damage = rand()%6 +5;
   user.m_hp-=damage;
   cout<<"Wolf attacked with: "<<damage<<endl;
   return damage;
}


int Centaur::attack(User& user)
{
   srand(3);
	int damage = rand()%6 +5;
   user.m_hp -=damage;
   cout<<"Centaur attacked with: "<<damage<<endl;
   return damage;
}
int Dragon::attack(User& user)
{
   int damage = rand()%6 +5;
   user.m_hp-=damage;
   cout<<"Dragon attacked with: "<<damage<<endl;
   return damage;
}