#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

void practiceCharMethod1(char character)
{
    if (islower(character)==true){
        cout << toupper(character) << endl;
    }
    if (islower(character)==false){

        cout << tolower(character) << endl;
    }

}