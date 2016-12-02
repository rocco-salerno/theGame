#include "user.h"
#include <cstdlib>
using namespace std;

int User::attack()
{
	int damage = rand()%6 +5;
    return damage;
}


int User::health()
{
	int health= m_hp;
	return health;
}

int User::increaseHP()
{
	health = health +10;
	return health;
}
