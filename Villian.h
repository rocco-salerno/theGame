using namespace std;
#include "User.h"


class Villians
{
    class Skeleton:public Villian
    {
        public:
            string enemyname=Skeleton;
            int enemyhealth=10;
            int enemydamage=2;
        
            void attack(User& enemy);
    
    };
    class Wolf:public Villian
    {
        string enemyname=Wolf;
        int enemyhealth=15;
        int enemydamage=4;
        
        void attack(User& enemy);
        
    };
    
    class Centaur:public Villian
    {
        string enemyname=Centaur;
        int emenyhealth=25;
        int enemydamage=6;
        
        void attack(User& enemy);
    };
   
    class Dragon:public Villian
    {
        string enemyname=Dragon;
        int enemyhealth=40;
        int enemydamage=10;
        
        void attack(User& enemy);
    };
};
