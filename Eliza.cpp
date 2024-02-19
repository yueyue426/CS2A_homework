// Student ID: 20437247
// Eliza.cpp
// BLUE.Quest-05-Eliza
//
#include <iostream>
#include <sstream>

using namespace std;

// Return a new string in which the letters (lowercase) a, e, i, o, and u
// have been replaced by the next vowel in the sequence aeiou. Replace u by a.
//
// Note that the string is passed in by reference. So the caller may not
// rely on the result being returned.
// TODO - Your code for rotate_vowels goes here
string rotate_vowels(string& s) {
    const string upper_vowels = "AEIOU";
    const string low_vowels = "aeiou";

    for(size_t i = 0; i < s.size(); i++) {
        for(size_t j = 0; j < 5; j++) {
            if(s[i] == upper_vowels[j]) {
                s[i] = upper_vowels[(j + 1) % 5];
                break;
            }
            else if(s[i] == low_vowels[j]) {
                s[i] = low_vowels[(j + 1) % 5];
                break;
            }
        }
    }
    return s;
}
// Return a string in which all occurrences of s have been replaced by th
// TODO - Your code for lispify goes here
string lispify(string s) {
    for(size_t i = 0; i < s.size(); i++) {
        if(s[i] == 's') {
            s.replace(i, 1, "th");
        }
        else if (s[i] == 'S') {
            s.replace(i, 1, "Th");
        }
    }
    return s;
}
// Enter the user-interaction loop as described earlier
void enter() {
// TODO - Your code here
    cout << "What?" << endl;
    string user_input;

    while(true) {
        getline(cin, user_input);

        if(user_input.empty()) {
            cout << "What?" << endl;
            continue;
        }

        cout << "    " << user_input << endl << endl;
        
        if(user_input.find("!") != string::npos) {
            cout << "OMG! You don't say!! " << user_input << "!!!!!" << endl;
            continue;
        }
        else if(user_input.find("why") != string::npos || user_input.find("what") != string::npos) {
            cout << "I'm sorry, I don't like questions that contain waht or why." << endl;
            continue;
        }
        else if(user_input.find('s') != string::npos) {
            cout << "Interethting. When did you thtop thtopping your thibilanth?" << endl;
            cout << lispify(user_input) << "! Sheesh! Now what?" << endl;
            continue;
        }
        else if(user_input.find("bye") != string::npos || user_input.find("Bye") != string::npos || 
                user_input.find("quit") != string::npos || user_input.find("Quit") != string::npos) {
            cout << "Ok Bye. Nice being a force of change in your life." << endl;
            break;
        }
        else {
            if(rand() % 10 > 8 || rand() % 10 > 9) {
                cout << "Huh? Why do you say: " << user_input << "?" << endl;
            } else {
                cout << rotate_vowels(user_input) << "?" << endl;
            }
        }
    }
}