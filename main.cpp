using namespace std;
#include <iostream>
#include "header.h"

int main(){

Characters p1;
p1.name = "paco";

cout << "Tu nombre es " << p1.name;
int tirada = p1.dado(6);
cout << tirada;
}