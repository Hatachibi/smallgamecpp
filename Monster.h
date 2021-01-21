#include<Character.h>

using namespace std;

class Monster : public Character
{
    public:

    Monster(int life, int attack, int defense, int bite);

    void getBiteAttack();

    private:
    
    int bite;

};