//header file for User
#include <iostream>
#include <string>
#include <cstdlib> //allows the use of rand to get a random integer used by rand() % num (this would do 0 to num-1)
using namespace std;
i
class User
{
public:
	string SetName();//names characters
   	int Attack();//how the attack works
	int HP();//increment/decrement hp
private:
	int m_hp=40;

};
#endif


