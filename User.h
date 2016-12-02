//header file for User
#include <iostream>
#include <string>
#include <cstdlib> //allows the use of rand to get a random integer used by rand() % num (this would do 0 to num-1)
using namespace std;

class User
{
public:
	string SetName();//names characters
   	int Attack();//how the attack works
	int HP();//increment/decrement hp
	int health(); //health the user has
	int damage(); //damage the user inflicts
private:
	int m_hp=40;
	int damage=rand() %6+5

};
#endif


