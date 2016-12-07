#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include "User.h"
#include "Villain.h"
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
	User name;
}
else
{
	cout<<"Ending program"<<endl;
}
	return 0;
}


int combat()
{
vector< enemy(3)
enemy ={"Skeleton","Wolf","Centaur"}
int i=0;
while(user.hp != 0 || enemy= 0 )
{
	for(It=v.begin(); It <=v.end(); It++)
	{
		if(It==0)
		{
			Skeleton *It;//create
		}
		if(It==1)
		{
			Wolf *It; //create wolf

		}
		if(i==2)
			{
				Centaurs *It;
			}
		else
			cout<<"something went wrong"<<endl;
	}
	cout<<"An"<<enemy<<"appears!"<<endl;
	cout<<"What will you do?"<<endl;
	int current=2; //Used for battle system
	int battle;
while(enemy.hp != 0 || name.hp !=0)
{
	cout<<"Press 1 to attack, or 2 to use a potion."<<endl;
	cin>>battle;
	if(battle==1)
	{
		name.attack(enemy)
		cout<<"You used your sword!"<<endl;
		if(enemyhp<=0)
		{
			cout<<"You have defeated the enemy!"<<endl;
			break;
		}
		else
		{
			enemy.attack(name);
			if(userhp<=0)
			{
				gameover();
				break;
			}
		}
	}
	if(battle==2)
	{
		name.potions()
		cout<<"You used a potion!"<<endl;
		cout<<"You healed ten HP!"<<endl;
		cout<<"You have:"<<potion<<"potions left."<<endl;
		enemy.attack(name);
		if(userhp<=0)
			{
				gameover();
				break;
			}
		else
			continue;
	}
/*	if(enemyhp<=0)
	{
		cout<<"You have defeated the enemy!"<<endl;
		break;
	}
	if(userhp<=0)
	{
		gameover();
		break;
	}
	*/
}
}

int ending()
{
cout<<"You have completed the game! Congratulations!"<<endl;
}

int gameover()
{
cout<<"You have fallen. Game over!"<<endl;
}

int main()
{
startgame();
combat();
}
