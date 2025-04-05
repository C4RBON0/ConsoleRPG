#ifndef CHARACTERS_H
#define CHARACTERS_H

class Characters {

    private:

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

        vector<float> inventory[10];

        int money;

    public:

        int dados(int caras);
};

#endif