#include "User.h"
#include <cstdlib>
#include <ctime>
using namespace std;

//class for user to attack the enemy
int User::attack(Villains& enemy)
{
	srand(time(NULL));
	int damage = rand()%6 +5;//random attack number generator	
	enemy.enemyhealth-=damage; // enemy health is subtracted from damage generated
	cout<<"You used your sowrd! You inflicted: "<<damage<<"to the enemy!"<<endl;
   	return damage;
}

int User::potions(User) //class for user to use potions
{
	if (potions==0) // if user has no more potions,
		cout<<"You are out of potions!"<<endl; //print this.
	//if the use has potions, use one and add 10 hp to user health
	else
	{
		cout<<"You used a potion!"<<endl;
		cout<<"You have gained ten HP back!"<<endl;
		potions=potions-1;
		currenthealth=currenthealth+10;
		return potions;
	}
}



User::User() //(string username)
{
	//string name=username;//how would the string name get called if we have it in gameplay?
	int m_hp; //max health for user
	int potions=3; //user starts with 3 potions
}
