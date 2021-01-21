

class Character
{
    public :

    Character();

    Character(int life, int attack, int defense);

    int getAttack();

    int getDefense();

    void receiveDomages(int domages);

    int getLife();

    protected :

    int life;

    int attack;

    int defense;

};