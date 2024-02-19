// Student ID: 20437247
// 
// Draw_Cat.cpp
//
// When this program is run it should print the following lines on the console:
// For reference, Schrodinger on the last output line starte at col 1.
//
//   -------
//  | /\_/\ |
//  |( o o )|
//  | > ^ < |
//   -------
// Schrodinger
//
#include <iostream>

using namespace std;

void draw_cat() {
    cout << "  -------" << endl;
    cout << " | /\\_/\\ |" << endl;
    cout << " |( o o )|" << endl;
    cout << " | > ^ < |" << endl;
    cout << "  -------" << endl;
    cout << "Schrodinger" << endl;
}

int main() {
    draw_cat();

    return 0;
}

