#include <iostream> //Used for cin and cout
#include <cstring>	//Used to get string (name of user)
#include <cstdlib> //Used for random function when attacking.
#include <vector> //Used to put enemies into vector.
#include "User.h" //Include user class so he or she can fight enemies
#include "Villian.h" //Include villian class for user to fight
using namespace std;

int gameover() //Called when player dies
{
cout<<"You have fallen. Game over!"<<endl;
return 0;
}

int ending() //Called if player defeats the dragon
{
cout<<"Just kidding! You did it!"<<endl;
cout<<"You have defeated the dragon and completed the game! Congratulations!"<<endl;
return 0;
}

int thanks() //Called with int ending()
{
cout<<"Thanks for playing!"<<endl;
return 0;
}

void combat() //Battle system
{
User name;
name.setHealth(100); //Declares user's health. (User starts off with 100 HP)
name.setPotions(3);	 //Declares number of potions owned by user. (User starts with 3 potions).
vector <Villains*> enemy(4);  //Put enemies into array. They will be called in the while loop.
enemy[0]= new Skeleton;	
enemy[0]->setHealth(10);	//Declare enemies' health. This is done for all 4 enemies.
enemy[1]= new Wolf;
enemy[1]->setHealth(15);
enemy[2]= new Centaur;
enemy[2]->setHealth(25);
enemy[3]= new Dragon;
enemy[3]->setHealth(40);
int battle; //Used for battle system.
int close=0; //Used for events. Increases by 1 every time an enemy is defeated.
for(int i =0; i <= enemy.size();i++)
{
while(enemy[i]->m_enemyHealth > 0 && name.m_hp >0 && close<=3)
{
	cout<<"Press 1 to attack or 2 to use a potion."<<endl;
	cin>>battle; //User can input attack or use potion.
	if(battle==1) //User decides to attack enemy.
	{
		name.attack(*enemy[i]); //User attacks enemy.
		if(enemy[i]->m_enemyHealth>0) //If the enemy has more than 0 HP, they attack the user.
			enemy[i]->attack(name);
				
		cout<<"Your HP is: "<< name.m_hp <<endl; //Show how much HP user and enemy have.
		cout<<"The enemy has: "<<enemy[i]->m_enemyHealth<<" HP"<<endl;
		
		if(name.m_hp<=0) //If user has 0 or less HP, they die. The gameover function is called, and the user breaks out of the loop.
		{
			gameover();
			break; //Program ends.
		}
		
		if(enemy[i]->m_enemyHealth<=0) //If an enemy is defeated (0 or less HP), call a new enemy.
		{
			cout<<"You have defeated the enemy!"<<endl;
			cout<<"A new enemy appears!"<<endl;
			close=close+1; //Add 1 to close. 
		}
		
	}
	if(battle==2)
	{
		name.potions(name); //Use a potion
		enemy[i]->attack(name); //Enemy attacks
	}
	if(close==3) //Lets user know he is battling dragon.
	{
		cout<<"You are battling the dragon!"<<endl;
	}
	if(close==4) //All enemies are defeated. Ending and thanks function are called, and loop is broken.
	{
		ending();
		thanks();
	}
}
}
}

int startgame() //Introduction.
{
int choice; 
string name;
cout<<"Would you like to play a game? Press the 1 button to start, otherwise hit anything else to end."<<endl; //Ask user to play game
cin>>choice;
if(choice==1) //Go through introduction if user wants to play.
{
	cout<<"Welcome!"<<endl;
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Hello there,"<<name<<"!"<<endl;
	cout<<"Welcome to the land of dungeons and dragons! Your goal is to defeat the dragon that attacked our village!"<<endl;
	cout<<"Just take note that there will be other enemies in your way!"<<endl;
	cout<<"You will be given a sword and some potions. Best of luck!"<<endl;
	combat(); //Initiate combat.
}
else
{
	cout<<"Ending program"<<endl; //End program if user does not input 1.
}
	return 0;
}

int main() //Main function. Only call the introduction function.
{
	startgame();
}