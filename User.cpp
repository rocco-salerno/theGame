#include <iostream>
#include <cstdlib>
#include "User.h"
#include "Villains.h"
using namespace std;

int User::attack(Villains& enemy)
{
	srand(time(NULL));
	int damage = rand()%6 +5;//random attack number generator
	enemy.m_enemyHealth-=damage; // enemy health is subtracted from damage generated
	cout<<"You used your sword! You inflicted: "<<damage<<"to the enemy!"<<endl;
   	return damage;
}

void User::setHealth()
{
	m_hp =100;
}
void User::setPotions()
{
	m_potions =5;
}
void User::potions(User&) //class for user to use it
{
	getHealth();
	int potions= m_potions;
	if (potions==0) // if user has no more it
		cout<<"You are out of potions!"<<endl; //print this.
	//if the use has potions, use one and add 10 hp to user health
	else
	{
		cout<<"You used a potion!"<<endl;
		cout<<"You have gained ten HP back!"<<endl;
		 m_hp += 10;
	}

}
