#ifndef USER_H_
#define USER_H_

#include <iostream>
#include <string>
#include <cstdlib> //allows the use of rand to get a random integer used by rand() % num (this would do 0 to num-1)
using namespace std;

class User
{
public:
	string setName();//names characters
   	//int attack();//how the attack works
	int increaseHP();//increment/decrement hp
	int health(); //health the user has
	void attack(villain&); //Has user attack villain
private:
	int m_hp=100;
	int damage=rand() %6+5;

};



#endif /* USER_H_ */
