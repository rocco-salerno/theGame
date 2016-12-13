#ifndef VILLAINS_H_
#define VILLAINS_H_
class User;

class Villains
{
public:
	virtual int attack(User& user){return 0;}
	~Villains();
	 void setHealth(int health);
	int m_enemyHealth;



};

class Skeleton : public Villains
{
public:
	   int attack(User& user);
	    int getHealth(){return m_enemyHealth;}
	    void setDamage();
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