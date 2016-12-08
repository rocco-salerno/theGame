#include "Villain.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//Declaring the variables

void Villains::attack(User& enemy)
{
	srand(time(NULL));
	int skeletonhealth = 10; //Enemies' HP
	int wolfhealth = 15;
	int centaurhealth = 25;
	int dragonhealth=40;
	int skeletondamage = rand()%2 +6; //Damage calculations of each enemy.
	int wolfdamage = rand()%4 +8;
	int centaurdamage = rand()%6 +10;
	int dragondamage = rand()%8 +12;
    enemy.hp-=skeletondamage;	
    enemy.hp-=wolfdamage;
    enemy.hp-=centaurdamage;
    enemy.hp-=dragondamage;
    cout<<"You are attacked by the"<<Villains<<"!"<<endl;
    cout<<"You have lost"<<skeletondamage<<"HP."<<endl;
    cout<<"You have lost"<<wolfdamage<<"HP."<<endl;
    cout<<"You have lost"<<centaurdamage<<"HP."<<endl;
    cout<<"You have lost"<<dragondamage<<"HP."<<endl;
	//We need to find a way to only print the correct damage statement to the specific enemy.
    return damage; 
}