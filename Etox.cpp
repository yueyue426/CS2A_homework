// Student ID: 20437247
//
// Etox.cpp
// Blue-Quest-01
//
#include <iostream>
#include <sstream>

#include <cmath>   // needed for sqrt
#include <cstdlib> // for exit()

using namespace std;

double etox_5_terms(double x) {
    return 1 + x + pow(x, 2) / 2 + pow(x, 3) / (3 * 2) + pow(x, 4) / (4 * 3 * 2);
}

int main(int argc, char **argv) {
    string user_input;
    double x;

    cout << "Enter a value for x: ";
    getline(cin, user_input);
    istringstream(user_input) >> x;

    double result = etox_5_terms(x);
    cout << result << endl;

    return 0;
}