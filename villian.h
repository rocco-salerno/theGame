#ifndef VILLAINS_H_
#define VILLAINS_H_
class User; //Include user class in villain header file so the user and enemies can interact with each other.

class Villains //Declare a superclass for all enemy subclasses. Subclasses will have these attributes.
{
public:
	virtual int attack(User& user){return 0;} 	//Gives enemy attack to use on user.
	~Villains();
	 void setHealth(int health);	//Gives enemy health.
	int m_enemyHealth;



};

class Skeleton : public Villains //Make a subclasses of all enemies in the program.
{
public:
	   int attack(User& user);		
	    int getHealth(){return m_enemyHealth;}	
	    void setDamage();	//Sets damage calculation in implementation file.
};

class Wolf: public Villains
{
public:
	 int attack(User& user);
	 int getHealth(){return m_enemyHealth;}
	 void setDamage();

};

class Centaur:public Villains
{
public:
	        int attack(User& user);
	        int getHealth(){return m_enemyHealth;}
	        void setDamage();
	    };


class Dragon:public Villains
{
public:
		 int attack(User& user);
		 int getHealth(){return m_enemyHealth;}
		 void setDamage();

};

#endif /* VILLAINS_H_ */