#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include "user.h"
#include "villains.h"
using namespace std;

int startgame()
{
int choice;
string name;
cout<<"Would you like to play a game? Press the 1 button to start, otherwise hit anything else to end."<<endl;
cin>>choice;
if(choice==1)
{
	cout<<"Welcome!"<<endl;
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Hello there,"<<name<<"!"<<endl;
	cout<<"Welcome to the land of dungeons and dragons! Your goal is to defeat the dragon that attacked our village!"<<endl;
	cout<<"You will be given a sword and some potions. Best of luck!"<<endl;

}
else
{
	cout<<"Ending program"<<endl;
}
	return 0;
}

int gameover()
{
cout<<"You have fallen. Game over!"<<endl;
return 0;
}

int ending()
{
cout<<"You have completed the game! Congratulations!"<<endl;
return 0;
}

void combat()
{
User name;
vector <Villains*> enemy(3);
enemy[0]= new Skeleton;
enemy[1]= new Wolf;
enemy[2]= new Centaur;

while(name.m_hp != 0 )
{
	//cout<<"An"<<enemy<<"appears!"<<endl;
	//cout<<"What will you do?"<<endl;
	int battle;
for(int i =0; i <= enemy.size();i++)
{
while(enemy[i]->m_enemyHealth > 0 || name.m_hp >0)
{
	cout<<"Press 1 to attack, or 2 to use a potion."<<endl;
	cin>>battle;
	if(battle==1)
	{
	name.attack(*enemy[i]);
		if(enemy[i]->m_enemyHealth<=0)
		{
			cout<<"You have defeated the enemy!"<<endl;
			cout<<enemy[i]->m_enemyHealth;
			break;
		}
		else
		{
			enemy[i]->attack(name);
			if(name.m_hp<=0)
			{
				gameover();
				break;
			}
		}
	}
	if(battle==2)
	{
		name.potions(name);
		enemy[i]->attack(name);
		if(name.m_hp<=0)
			{
				gameover();
				break;
			}
		else
			continue;
	}
}
}
}
}
int main()
{
	startgame();
	combat();
}
