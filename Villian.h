using namespace std;
#include "User.h"


class Villians
{
    class Skeleton:public Villian
    {
        public:
            string enemyname=Skeleton;
            int m_enemyhealth;
            int m_enemydamage;
        
            void attack(User& enemy);
    
    };
    class Wolf:public Villian
    {
        public:
        string enemyname=Wolf;
        int m_enemyhealth=15;
        int m_enemydamage=4;
        
        void attack(User& enemy);
        
    };
    
    class Centaur:public Villian
    {
        public:
        string enemyname=Centaur;
        int m_enemyhealth=25;
        int m_enemydamage=6;
        
        void attack(User& enemy);
    };
   
    class Dragon:public Villian
    {
        public:
        string enemyname=Dragon;
        int m_enemyhealth=40;
        int m_enemydamage=10;
        
        void attack(User& enemy);
    };
    private:
        int m_enemyhealth;
        int m_enemydamage;
};
