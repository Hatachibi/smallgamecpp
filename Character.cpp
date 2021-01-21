#include<Character.h>

Character::Character(int life, int attack, int defense)
{
    Character::life = life;

    Character::attack = attack;

    Character::defense = defense;
}

void Character::receiveDomages(int domages)
{
    if(Character::life<=domages)
    {
        Character::life = 0;
    }
    else
    {
        Character::life -= domages;
    }
}

int Character::getAttack()
{
    return Character::attack;
}

int Character::getDefense()
{
    return Character::defense;
}

int Character::getLife()
{
    return Character::life;
}



