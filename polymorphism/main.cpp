#include <iostream>

using namespace std;

class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja: public Enemy
{
public:

    void attack(){
        cout << "I am a Ninja, Ninja chop! = -" << attackPower << endl;
    }
};

class Monster: public Enemy
{
public:

    void attack(){
        cout << "I am a Moster, Monster will eat you! = -" << attackPower << endl;
    }
};

int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setAttackPower(49);
    enemy2->setAttackPower(79);

    n.attack();
    m.attack();
}
