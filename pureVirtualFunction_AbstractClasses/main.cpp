#include <iostream>

using namespace std;

class Enemy{
public:
    //virtual void attack()=0; //******* pure virtual function
    //An abstract class is a class which has a pure virtual function
    virtual void attack(){
        cout << "I am the enemy Class woow! " << endl;
    };
};

class Ninja: public Enemy{
public:
    void attack(){
        cout << "I am a Ninja Warrior! " << endl;
    }
};

class Monster: public Enemy{
public:
    void attack(){
        cout << "I am a Monster!" << endl;
    }
};
int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
}

//basically when you have the option of a virtual function,
//you have the option to over ride it and replace it with the most current value other wise it will take the
//default value of the enemy virtual void attack(){};

/*A pure virtual function has no implementation and it is set to be 0*/
/*Whenever you create a pure virtual function, you need to over ride it there is no option*/
