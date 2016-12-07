
#ifndef USER_H_
#define USER_H_

#include "Villain.h"
#include <iostream>
#include <string>
#include <cstdlib> //allows the use of rand to get a random integer used by rand() % num (this would do 0 to num-1)
using namespace std;

class User
{
public:
	void potions(class User);//health the user has
	int attack(class Villain&); //Has user attack villain
	int getHealth(){return m_hp;}
	void setHealth();
	void setPotions();
private:
	int m_hp;//100
	int m_potions; //5 potions for the user.

};




#endif /* USER_H_ */

