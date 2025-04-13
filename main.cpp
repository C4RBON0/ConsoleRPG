#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

//Classes
class Characters{

    //Attributes
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
        int race;
        int clas;

        int money;

        int plusstrength;
        int plusdexterity;
        int plusconstitution;
        int plusintelligence;
        int pluswisdom;
        int pluscharm;

    //Functions
    public:

        int dado(int caras){
            int total = rand()%caras+1;
            return total;
        }

        void rollstats(){
            strength = dado(20);
            dexterity = dado(20);
            constitution = dado(20);
            intelligence = dado(20);
            wisdom = dado(20);
            charm = dado(20);
        }

        void checkplus() {
            if (strength <= 5) {
                plusstrength = -4;
            } else if (strength <= 10) {
                plusstrength = -2;
            } else if (strength <= 15) {
                plusstrength = 2;
            } else {
                plusstrength = 4;
            }
        
            if (dexterity <= 5) {
                plusdexterity = -4;
            } else if (dexterity <= 10) {
                plusdexterity = -2;
            } else if (dexterity <= 15) {
                plusdexterity = 2;
            } else {
                plusdexterity = 4;
            }
        
            if (constitution <= 5) {
                plusconstitution = -4;
            } else if (constitution <= 10) {
                plusconstitution = -2;
            } else if (constitution <= 15) {
                plusconstitution = 2;
            } else {
                plusconstitution = 4;
            }
        
            if (intelligence <= 5) {
                plusintelligence = -4;
            } else if (intelligence <= 10) {
                plusintelligence = -2;
            } else if (intelligence <= 15) {
                plusintelligence = 2;
            } else {
                plusintelligence = 4;
            }
        
            if (wisdom <= 5) {
                pluswisdom = -4;
            } else if (wisdom <= 10) {
                pluswisdom = -2;
            } else if (wisdom <= 15) {
                pluswisdom = 2;
            } else {
                pluswisdom = 4;
            }
        
            if (charm <= 5) {
                pluscharm = -4;
            } else if (charm <= 10) {
                pluscharm = -2;
            } else if (charm <= 15) {
                pluscharm = 2;
            } else {
                pluscharm = 4;
            }
        }

};

//Global atributes

//Main

int main(){

    srand(time(NULL));
    Characters hero;
    hero.rollstats();
    hero.checkplus();

    char race;

    //Create character
    cout << "What is your name: ";
    cin >> hero.name;
    cout << endl << "Select your race: " << endl;
    cout << "1 - Human (+1 to 2 desired stats)" << endl;
    cout << "2 - Dwarf (+2 constitution, +1 to 1 desired stat)" << endl;
    cout << "3 - Elf (+2 dexterity, +1 to 1 desired stat)" << endl;
    cout << "4 - Tiefling (+2 strength, +1 to 1 desired stat)" << endl;
    cout << "5 - Gnome (+2 intelligence, +1 to 1 desired stat)" << endl;
    cin >> race;





    cout << "You wake up in a tavern in Valencia, in the year 1312" << endl;
    cout << "You notice someone is aproaching you, he is trying to rob you" << endl;
    cout << "What are you going to do?" << endl;
    cout << "1 - Attack" << endl << "2 - Talk" << endl << "3 - Ignore";
    char i1;
    cin >> i1;
    switch(i1)
    {
        case '1':
        {
            // tutorial combat
            break;
        }
        case '2':
        {
            char i2;
            cout << "Oh ... H-Hello there, I didn't noticed your were awake" << endl;
            cout << "1 - Attack" << endl << "2 - I'm your father" << endl << "3 - Seduce";
            break;
        }case '3':
        {
            hero.money = hero.money - hero.dado(10);
            cout << "Te notas mas ligero" << endl << "Decides mirar en tus bolsillos, encuentras " << hero.money << "monedas de oro" << endl;
            break;
        }
    }
}