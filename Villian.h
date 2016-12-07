//header for all Villians
#include <iostream>
using namespace std;
#include "User.h"


class Villians
{
    class Skeleton
    {
        public:
            string enemyname=Skeleton;
            int enemyhealth=10;
            int enemydamage=2;
        
            void attack(user& enemy);
    
    };
    class Wolf
    {
        string enemyname=Wolf;
        int enemyhealth=15;
        int enemydamage=4;
        
        void attack(user& enemy);
        
    };
    
    class Centaur
    {
        string enemyname=Centaur;
        int enemyhealth=25;
        int enemydamage=6;
        
        void attack(user& enemy);
    };
   
    class Dragon
    {
        string enemyname=Dragon;
        int enemyhealth=40;
        int enemydamage=10;
        
        void attack(user& enemy);
    };
};
