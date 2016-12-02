#include <iostream>
#include <cstring>
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

int main()
{
startgame();
}
