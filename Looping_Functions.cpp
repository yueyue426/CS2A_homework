// Student ID: 20437247
//
// Looping_Functions.cpp
//
// Created by Anand Venkataraman on 8/9/2019.
// Copyrigh © 2019 Anand Venkataraman. All rights reserved.

#include <iostream>
#include <sstream>

using namespace std;

// Give the user 6 chances to guess the secret number n (0-10), If they get it,
// say so and return true. Else say so and return false.
bool play_game(int n) {
    cout << "Welcome to my number guessing game" << endl << endl;

    int counter = 1;
    string guess;
    int x;
    while(counter < 7) {
        cout << "Enter your guess: " << endl;
        getline(cin, guess);
        istringstream(guess) >> x;
        cout << "You entered: " << x << endl;

        if(x == n) {
            cout << "You found it in " << counter << " guess(es)." << endl;
            return true;
        } else {
            counter++;
        }
    }
    cout << "I'm sorry. You didn't find my number." << endl;
    cout << "It was " << n << endl;
    return false;
}

// Calculate e^x using the series summation up to exactly the first 
// n terms including the 0th term.
double etox(double x, size_t  n) {
    if(n == 0) {
        return 0;
    }

    double sum = 1.0;
    double product;
    double power;
    for (size_t i = 1; i < n; i++) {
        product = i;
        power = x;
        for(size_t j = i; j > 1; j--) {
            product *= (j - 1);
        }
        for(size_t k = i; k > 1; k--) {
            power *= x;
        }
        sum += power / product;
    }
    return sum;
}

// Return the number of occurrences of char c in string s
size_t count_chars(string s, char c) {
    size_t counter = 0;
    for(size_t i = 0; i < s.size(); i++) {
        if(s[i] == c) {
            counter++;
        }
    }
    return counter;
}

// Use Euclid's algorithm to calculate the GCD of the given numbers
size_t gcd(size_t a, size_t b) {
    if(a == 0) {
        return b;
    }
    else if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

// Return a string of the form n1, n2, n3, ... for the given AP.
string get_ap_terms(int a, int d, size_t n) {
    if(n == 0) {
        return "";
    }

    int sum;
    stringstream s;
    stringstream sa;
    sa << a;
    string result = sa.str();

    for(size_t i = 1; i < n; i++) {
        sum = a + i * d;
        cout << sum << endl;  
        s << sum;
        result += "," + s.str();
        s.str("");
        s.clear();
    }
    return result;
}

// Return a string of the form n1, n2, n3, ... for the given GP.
string get_gp_terms(double a, double r, size_t n) {
    if(n == 0) {
        return "";
    }

    double product;
    double power;
    stringstream s;
    stringstream sa;
    sa << a;
    string result = sa.str();

    for(size_t i = 1; i < n; i++) {
        power = r;
        for(size_t j = i; j > 1; j--) {
            power *= r;
        }
        product = a * power;
        s << product;
        result += "," + s.str();
        s.str("");
        s.clear();
    }
    return result;
}

double get_nth_fibonacci_number(size_t n) {
    double f1 = 1;
    double f2 = 1;
    double temp = 0;

    if(n == 0) {
        return 0;
    }
    else if(n == 1 || n == 2) {
        return 1;
    } else {
        for(size_t i = 3; i < n; i++) {
            temp = f1;
            f1 = f2;
            f2 = temp + f2;
        }
        return (f1 + f2);
    }
}