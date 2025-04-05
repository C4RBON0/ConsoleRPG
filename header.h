#ifndef CHARACTERS_H
#define CHARACTERS_H

class Characters {

    public:

        string name;
        int health;
        int armour;
        int initiative;
        int strength;
        int dexterity;
        int constitution;
        int intelligence;
        int wisdom;
        int charm;

        int money;

    public:

        int dados(int caras);
};

#endif