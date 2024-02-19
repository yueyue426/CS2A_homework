// Limerick.cpp
// BLUE-Quest-01
//
#include <iostream>
#include <sstream> // Need this for istringstream below

#include <cmath>   // needed for sqrt
#include <cstdlib> // for exit()

using namespace std;

// The result of the function should be 81
// if dozen is 12, gross is 144 and score is 20.
double eval_limerick(int dozen, int gross, int score) {
    return (dozen + gross + score + 3 * sqrt(4)) / 7 + 5 * 11;
}

int main(int argc, char **argv) {
    int dozen, gross, score;

    if (argc < 4) {
        cerr << "Usage: limerick dozen-val gross-val score-val\n";
        exit(1);
    }

    istringstream(argv[1]) >> dozen;
    istringstream(argv[2]) >> gross;
    istringstream(argv[3]) >> score;

    double result = eval_limerick(dozen, gross, score);
    cout << result << endl;

    return 0;
}
