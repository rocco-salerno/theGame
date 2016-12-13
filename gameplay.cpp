#include <iostream>
#include <cstring>
#include <cstdlib>
#include <vector>
#include "User.h"
#include "Villian.h"
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
	cout<<"Just take note that there will be other enemies in your way!"<<endl;
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
cout<<"Just kidding! You did it!"<<endl;
cout<<"You have defeated the dragon and completed the game! Congratulations!"<<endl;
return 0;
}

int thanks()
{
cout<<"Thanks for playing!"<<endl;
return 0;
}

void combat()
{
User name;
name.setHealth(100);
name.setPotions(5);
vector <Villains*> enemy(4);
enemy[0]= new Skeleton;
enemy[0]->setHealth(10);
enemy[1]= new Wolf;
enemy[1]->setHealth(15);
enemy[2]= new Centaur;
enemy[2]->setHealth(25);
enemy[3]= new Dragon;
enemy[3]->setHealth(40);
int battle;
int close=0;
for(int i =0; i <= enemy.size();i++)
{
while(enemy[i]->m_enemyHealth > 0 && name.m_hp >0 && close<=3)
{
	cout<<"Press 1 to attack or 2 to use a potion."<<endl;
	cin>>battle;
	if(battle==1)
	{
		name.attack(*enemy[i]);
		enemy[i]->attack(name);
		cout<<"Your HP is: "<< name.m_hp <<endl;
		cout<<"The enemy has: "<<enemy[i]->m_enemyHealth<<" HP"<<endl;
		
		if(name.m_hp<=0)
		{
			gameover();
			break;
		}
		
		if(enemy[i]->m_enemyHealth<=0)
		{
			cout<<"You have defeated the enemy!"<<endl;
			cout<<"A new enemy appears!"<<endl;
			enemy[i]=enemy[i]+1;
			close=close+1;
		}
		
	}
	if(battle==2)
	{
		name.potions(name);
	}
	if(close==3)
	{
		cout<<"You are battling the dragon!"<<endl;
	}
	if(close==4)
	{
		ending();
		thanks();
	}
}
}
}

int main()
{
	startgame();
	combat();
}