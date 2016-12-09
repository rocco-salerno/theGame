#ifndef VILLAINS_H_
#define VILLAINS_H_
class User;

class Villains
{
public:
	virtual int attack(User& user);
	virtual ~Villains();
	int m_enemyHealth;



};

class Skeleton : public Villains
{
public:
		// int m_enemyhealth=10;
	    //int m_enemydamage=3;
	   int attack(User& user);
	    void setHealth();
	    int getHealth(){return m_enemyHealth;}
	    void setDamage();
};

class Wolf: public Villains
{
public:
	 //int m_enemyhealth=15;
	 //int m_enemydamage=4;
	 int attack(User& user);
	 void setHealth();
	 int getHealth(){return m_enemyHealth;}
	 void setDamage();

};

class Centaur:public Villains
{
public:
	    	//int m_enemyhealth=25;
	        //int m_enemydamage=6;
	        int attack(User& user);
	        void setHealth();
	        int getHealth(){return m_enemyHealth;}
	        void setDamage();
	    };


class Dragon:public Villains
{
public:
		 //int m_enemyhealth=40;
		 // int m_enemydamage=10;
		 int attack(User& user);
		 void setHealth();
		 int getHealth(){return m_enemyHealth;}
		 void setDamage();

};

#endif /* VILLAINS_H_ */
#endif /* VILLAINS_H_ */
