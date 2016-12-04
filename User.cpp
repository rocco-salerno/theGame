#include "user.h"
#include <cstdlib>
using namespace std;

void User::attack(Villains& enemy)
{
	int damage = rand()%6 +5;	
	enemy.health-=damage;
	cout<<"You used your sowrd! You inflicted: "<<damage<<"to the enemy!"<<endl;
   	return damage;
}

void User::potions(User)
	if (potions==0)
		cout<<"You are out of potions!"<<endl;
	else
		cout<<"You used a potion!"<<endl;
		cout<<"You have gained ten HP back!"<<endl;
		currenthealth=currenthealth+10;
	return potions;

int User::health()
{
	int health= m_hp;
	return health;
}

int User::increaseHP()
{
	health = health +10;
	return health;
}
