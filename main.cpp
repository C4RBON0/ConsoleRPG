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

        int money = 10;

        int plusstrength;
        int plusdexterity;
        int plusconstitution;
        int plusintelligence;
        int pluswisdom;
        int pluscharm;

        int exp;

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

            if (strength <= 5) plusstrength = -4;
            else if (strength <= 10) plusstrength = -2;
            else if (strength <= 15) plusstrength = 2;
            else if (strength <= 20) plusstrength = 4;
            else plusstrength = 6;
        
            if (dexterity <= 5) plusdexterity = -4;
            else if (dexterity <= 10) plusdexterity = -2;
            else if (dexterity <= 15) plusdexterity = 2;
            else if (dexterity <= 20) plusdexterity = 4;
            else plusdexterity = 6;
        
            if (constitution <= 5) plusconstitution = -4;
            else if (constitution <= 10) plusconstitution = -2;
            else if (constitution <= 15) plusconstitution = 2;
            else if (constitution <= 20) plusconstitution = 4;
            else plusconstitution = 6;
        
            if (intelligence <= 5) plusintelligence = -4;
            else if (intelligence <= 10) plusintelligence = -2;
            else if (intelligence <= 15) plusintelligence = 2;
            else if (intelligence <= 20) plusintelligence = 4;
            else plusintelligence = 6;
        
            if (wisdom <= 5) pluswisdom = -4;
            else if (wisdom <= 10) pluswisdom = -2;
            else if (wisdom <= 15) pluswisdom = 2;
            else if (wisdom <= 20) pluswisdom = 4;
            else pluswisdom = 6;
        
            if (charm <= 5) pluscharm = -4;
            else if (charm <= 10) pluscharm = -2;
            else if (charm <= 15) pluscharm = 2;
            else if (charm <= 20) pluscharm = 4;
            else pluscharm = 6;
        }
        

        void selectRace() {
            char raceInput;
            cout << endl << "Select your race: " << endl;
            cout << "1 - Human (+1 to 2 desired stats, can repeat the stat)" << endl;
            cout << "2 - Dwarf (+2 constitution, +1 to 1 desired stat)" << endl;
            cout << "3 - Elf (+2 dexterity, +1 to 1 desired stat)" << endl;
            cout << "4 - Tiefling (+2 strength, +1 to 1 desired stat)" << endl;
            cout << "5 - Gnome (+2 intelligence, +1 to 1 desired stat)" << endl;
            cin >> raceInput;
        
            if (raceInput != '1' && raceInput != '2' && raceInput != '3' && raceInput != '4' && raceInput != '5') {
                raceInput = '1';
            }
        
            if (raceInput == '1') {
                int option1, option2;
                cout << "Choose 2 stats to increase by 1 (1-6): ";
                cin >> option1;
                cout << "Second stat: ";
                cin >> option2;
        
                if (option1 == 1) strength++;
                else if (option1 == 2) dexterity++;
                else if (option1 == 3) constitution++;
                else if (option1 == 4) intelligence++;
                else if (option1 == 5) wisdom++;
                else if (option1 == 6) charm++;
        
                if (option2 == 1) strength++;
                else if (option2 == 2) dexterity++;
                else if (option2 == 3) constitution++;
                else if (option2 == 4) intelligence++;
                else if (option2 == 5) wisdom++;
                else if (option2 == 6) charm++;
            }
        
            else if (raceInput == '2') {
                int option;
                cout << "Choose 1 stat to increase by 1 (1-6): ";
                cin >> option;
                constitution += 2;
                if (option == 1) strength++;
                else if (option == 2) dexterity++;
                else if (option == 3) constitution++;
                else if (option == 4) intelligence++;
                else if (option == 5) wisdom++;
                else if (option == 6) charm++;
            }
        
            else if (raceInput == '3') {
                int option;
                cout << "Choose 1 stat to increase by 1 (1-6): ";
                cin >> option;
                dexterity += 2;
                if (option == 1) strength++;
                else if (option == 2) dexterity++;
                else if (option == 3) constitution++;
                else if (option == 4) intelligence++;
                else if (option == 5) wisdom++;
                else if (option == 6) charm++;
            }
        
            else if (raceInput == '4') {
                int option;
                cout << "Choose 1 stat to increase by 1 (1-6): ";
                cin >> option;
                strength += 2;
                if (option == 1) strength++;
                else if (option == 2) dexterity++;
                else if (option == 3) constitution++;
                else if (option == 4) intelligence++;
                else if (option == 5) wisdom++;
                else if (option == 6) charm++;
            }
        
            else if (raceInput == '5') {
                int option;
                cout << "Choose 1 stat to increase by 1 (1-6): ";
                cin >> option;
                intelligence += 2;
                if (option == 1) strength++;
                else if (option == 2) dexterity++;
                else if (option == 3) constitution++;
                else if (option == 4) intelligence++;
                else if (option == 5) wisdom++;
                else if (option == 6) charm++;
            }
        }

        void selectClass(){
            
            cout << endl << "Select your class: " << endl;
            cout << "1 - Rogue" << endl;
            cout << "2 - Barbarian" << endl;
            cout << "3 - Bard" << endl;
            cout << "4 - Warlock" << endl;
            cout << "5 - Wizard" << endl;

            cout << "Select your class: ";
            int option;
            cin >> option;

            if (option == 1) dexterity += 2;
                else if (option == 2) strength += 2;
                else if (option == 3) charm += 2;
                else if (option == 4) wisdom += 2;
                else if (option == 5) intelligence += 2;


        }

        void showstats(){

            cout << "--- Your stats ---" << endl;

            cout << "Strength:      " << strength << " + " << plusstrength << endl;
            cout << "Dexterity:     " << dexterity << " + " << plusdexterity << endl;
            cout << "Consitution:   " << constitution << " + " << plusconstitution << endl;
            cout << "Intelligence:  " << intelligence << " + " << plusintelligence << endl;
            cout << "Wisdom:        " << wisdom<< " + " << pluswisdom << endl;
            cout << "Charm:         " << charm << " + " << pluscharm<< endl;
        }
        

};

//Global atributes

//Main

int main(){

    srand(time(NULL));
    Characters hero;
    hero.rollstats();
    hero.checkplus();

    //Create character
    cout << "What is your name: ";
    cin >> hero.name;

    hero.showstats();

    cout << "Stats: " << endl;
    cout << "1 - Strength" << endl;
    cout << "2 - Dexterity" << endl;
    cout << "3 - Consitution" << endl;
    cout << "4 - Intelligence" << endl;
    cout << "5 - Wisdom" << endl;
    cout << "6 - Charm" << endl;

    hero.selectRace();
    hero.selectClass();

    hero.checkplus();

    hero.showstats();


    cout << "You wake up in a tavern in Valencia, in the year 1312" << endl;
    cout << "You notice someone is aproaching you, he is trying to rob you" << endl;
    cout << "What are you going to do?" << endl;
    cout << "1 - Attack" << endl << "2 - Talk" << endl << "3 - Ignore" << endl;
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
            cout << "Oh ... H-Hello there, I didn't noticed your were awake" << endl;
            cout << "1 - Attack" << endl << "2 - I'm your father" << endl << "3 - Seduce" << endl;
            int option;
            cin >> option;

            switch (option)
            {
            case 3:
                
                int t1 = hero.dado(20) + hero.pluscharm;
                if(t1 > 10){
                    cout << "You seduced that man, he is now in love with you." << endl;
                    cout << "He gave you something before desapearing... ";
                    int g1 = hero.dado(50);
                    cout << g1 << " gold coins";
                    hero.money += g1;
                    hero.exp += 300;
                }
                else{
                    cout << "He starts running away, he is really scared.";
                    hero.exp += 150;
                }
                break;
            }

            break;
        }case '3':
        {
            hero.money = hero.money - hero.dado(10);
            cout << "You notice yourself a bit light." << endl << "You decide to check your backpack, you find " << hero.money << " gold coins." << endl;
            break;
        }
    }
}