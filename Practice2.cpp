#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

int main(){

    double nameGuy;
    cout << "Whats your name: " << endl;
    cin >> nameGuy;
    cout << islower(nameGuy) << endl;
    return 0;
}

