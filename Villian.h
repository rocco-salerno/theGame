#ifndef VILLAINS_H_
#define VILLAINS_H_



class Villains{
public:
	    class Skeleton:public Villains
	    {
	    public:
	        // int m_enemyhealth=10; 
	        //int m_enemydamage=3;
	    	void attack(User&);
	    	void setHealth();
	    	int getHealth(){return m_enemyhealth;}
	    	void setDamage();


	    };
	    class Wolf:public Villains
	    {
	     public:
	        //int m_enemyhealth=15;
	        //int m_enemydamage=4;
	         void attack(User&);
	         void setHealth();
	         int getHealth(){return m_enemyhealth;}
	         void setDamage();

	    };

	    class Centaur:public Villains
	    {
	     public:
	        //int m_enemyhealth=25;
	        //int m_enemydamage=6;
	        void attack(User&);
	        void setHealth();
	        int getHealth(){return m_enemyhealth;}
	        void setDamage();
	    };

	    class Dragon:public Villains
	    {
	     public:
	       //int m_enemyhealth=40;
	       // int m_enemydamage=10;
	        void attack(User&);
	        void setHealth();
	        int getHealth(){return m_enemyhealth;}
	        void setDamage();
	    };
	private:
	    int m_enemyhealth;
	    int m_enemydamage;

};



#endif /* VILLAINS_H_ */
