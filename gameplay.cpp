#include <iostream>
#include <cstring>
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
	User name;
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


int combat()
{
string enemy= new int[3]
for(int i=0;i=2;i++)
{
	//enemy{i]=Villian to make enemies enemy class 
	     }
int potion=3;	//Starting number of user's potions	
int enemyhp=10;
	cout<<"An"<<enemy<<"appears!"<<endl;
	cout<<"What will you do?"<<endl;
int current=2; //Initi
while(current==2){ 
	cout<<"Press 1 to attack, or 2 to use a potion."<<endl;
	cin>>battle;
if(battle==1)
	cout<<"You used your sword!"<<endl;
	cout<<damage<<"points of damage to"<<enemy<<endl;
	enemyhp=enemyhp-10;
if(battle==2)
	cout<<"You used a potion!"<<endl;
	cout<<"You healed ten HP!"<<endl;
	potion=potion-1;
	cout<<"You have:"<<potion<<"potions left."<<endl;
if(enemyhp<=0)
	cout<<"You have defeated the enemy!"<<endl;
	current=1;
	break;
if(userhp<=0)
	current=1;
	gameover();
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
ending();
gameover();
}
