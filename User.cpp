#include <iostream>
#include <cstdlib>
#include "User.h"
#include "Villain.h"
using namespace std;

int User::attack(class Villain&)
{
	srand(time(NULL));
	int damage = rand()%6 +5;//random attack number generator
	Villain.getHealth()-=damage; // enemy health is subtracted from damage generated
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
void User::potions(class User) //class for user to use it
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
		m_health= m_health + 10;
	}

}
