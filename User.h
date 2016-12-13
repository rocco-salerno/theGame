#ifndef USER_H_
#define USER_H_

#include <iostream>
#include <string>
#include <cstdlib> //allows the use of rand to get a random integer used by rand() % num (this would do 0 to num-1)
using namespace std;
class Villains;

class User
{
public:
	void potions(User&);//health the user has
	int attack(Villains& enemy);
	int getHealth(){return m_hp;}
	void setHealth(int userHealth);
	void setPotions(int userPotions);
	int m_hp;
private:
	int m_potions; //5 potions for the user.

};




#endif /* USER_H_ */



