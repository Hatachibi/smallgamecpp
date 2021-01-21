#include<Character.h>
#include<Inventory.h>

class MainCharacter : public Character
{
    public:

    MainCharacter(int life, int attack, int defense, int sword, Inventory inventory);

    int swordAttack();

    private:

    int sword;

    Inventory inventory;

};