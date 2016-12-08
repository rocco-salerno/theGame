#include <iostream>
#include "User.h"
using namespace std;

//Setting up variables for each enemy, split into classes.

class Villian //The superclass
{
    class Skeleton:public Villian //Splitting up every enemy class into a subclass from the superclass.
    {
    	public:
    	string enemyname=Skeleton; //Setting up the enemy name
    	int m_skeletonhealth;	//Set up variables for health of each enemy
    	int m_skeletondamage;	//Set up variables for damage each enemy inflicts
        
   	void attack(User& enemy);
    
    };
    class Wolf:public Villian
    {
        public:
        string enemyname=Wolf;
        int m_wolfhealth;
        int m_wolfdamage;
        
        void attack(User& enemy);
        
    };
    
    class Centaur:public Villian
    {
        public:
        string enemyname=Centaur;
        int m_centaurhealth;
        int m_centaurdamage;
        
        void attack(User& enemy);
    };
   
    class Dragon:public Villian
    {
        public:
        string enemyname=Dragon;
        int m_dragonhealth;
        int m_dragondamage;
        
        void attack(User& enemy);
    };
    private:
        int m_enemyhealth;
        int m_enemydamage;
};
