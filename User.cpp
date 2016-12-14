#include <iostream>
#include <cstdlib>
#include "User.h"
#include "Villian.h"
using namespace std;

int User::attack(Villains& enemy) //Allows user to attack enemies.
{
	srand(time(NULL));	//Damage is a random number between 5 and 11.
	int mdamage = rand()%6 +5;//random attack number generator
	enemy.m_enemyHealth=enemy.m_enemyHealth-mdamage; // enemy health is subtracted from damage generated
	cout<<"You used your sword! You inflicted "<<mdamage<<" damage to the enemy!"<<endl; //Tells user how much damage attack did.
   	return mdamage;
}

void User::setHealth(int userHealth) //Sets up user's health in main file.
{
	m_hp = userHealth;
}
void User::setPotions(int userPotions) //Sets up number of potions in main file.
{
	m_potions = userPotions;
}
void User::potions(User&) //class for user to use it
{
	getHealth();
	if (m_potions==0) // if user has no more it
		cout<<"You are out of potions!"<<endl; //print this.
	//if the use has potions, use one and add 10 hp to user health
	else
	{
		cout<<"You used a potion!"<<endl;
		cout<<"You have gained 15 HP back!"<<endl;
		m_potions-=1;	//Subtract 1 from number of potions.
		m_hp += 15;		//Heals 15 HP of the user.
		cout<<"You have "<<m_hp<<" HP!"<<endl;	//Tells the user how much HP he or she has after using potion.
	}

}