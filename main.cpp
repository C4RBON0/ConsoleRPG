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

    //Functions
    public:

        int dado(int caras){
            int total = rand()%caras+1;
            return total;
        }

};

//Global atributes

//Main

int main(){

    srand(time(NULL));

    Characters p1;
    p1.name = "paco";

    cout << "Tu nombre es " << p1.name;
    int tirada = p1.dado(6);
    cout << tirada;
}