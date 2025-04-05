using namespace std;
#include <iostream>
#include <vector>
#include <cstdlib>
#include "header.h"

class Characters{

    //Attributes
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

    //Functions
    public:

        int dado(int caras){
            int total = rand()%caras+1;
            return total;
        }

};