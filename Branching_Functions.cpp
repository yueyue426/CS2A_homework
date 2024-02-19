// Branching-Functions.cpp
// BLUE-Quest-03
//
#include <iostream>

// Forward declarations of functions that will be used in this file
// before their definitions are encountered by the compiler
double mean_of_3(int n1, int n2, int n3);
int max_of_5(int n1, int n2, int n3, int n4, int n5);
int min_of_5(int n1, int n2, int n3, int n4, int n5);
bool sides_make_triangle(int a, int b, int c);
bool angles_make_triangle(int A, int B, int C);
bool is_a_leap_year(int yyyy);

// This function returns the mean of the three numbers passed 
// in as parameters. Note that the mean may not be a round
// number. So you must use the double datatype for it.
double mean_of_3(int n1, int n2, int n3) {
   return (n1 + n2 + n3) / 3.0;
}

// This function returns the maximum of the 5 given numbers
int max_of_5(int n1, int n2, int n3, int n4, int n5) {
    int temp;
    temp = n1 >= n2? n1 : n2;
    temp = temp >= n3? temp : n3;
    temp = temp >= n4? temp : n4;
    temp = temp >= n5? temp : n5;

    return temp;
}

// This function returns the minimum of the 5 given numbers
int min_of_5(int n1, int n2, int n3, int n4, int n5) {
    int temp = n1;
    temp = n1 <= n2? n1 : n2;
    temp = temp <= n3? temp : n3;
    temp = temp <= n4? temp : n4;
    temp = temp <= n5? temp : n5;

    return temp;
}

// Given three lengths, this function should return whether they can be the 
// sides of some triangle. The heuristic you code should check if the 
// sum fo the two smallest sides is greater than or equal to the third side.
// Treat extreme cases as valid triangles. E.g. a+b == c means valid triangle.
// This chanllege is to do it without using arrays.
bool sides_make_triangle(int a, int b, int c) {
    // Sides must be greater than 0
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    // Find the two smallest sides and their sum
    int side_sum;
    if (a <= c && b <= c) {
        side_sum = a + b;
    }
    else if (a <= b && c <= b) {
        side_sum = a + c;
    }
    else {
        side_sum = b + c;
    }
    // Decide if it is triangle or not
    if (side_sum >= a && side_sum >= b && side_sum >= c){
        return true;
    }
    else {
        return false;
    }
}

// Given three angles as integer degrees, this functioin should return whether
// they can be internal angles of some triangle. Treat extreme cases as 
// valid triangles. E.g. (0, 0, 180) is a valid triangle
bool angles_make_triangle(int A, int B, int C) {
    // Angles must be greater or equal to 0
    if (A < 0 || B < 0 || C < 0) {
        return false;
    }

    if (A + B + C == 180) {
        return true;
    } else {
        return false;
    }
}

// Return true if the year yyyy is a leap year and false if not.
bool is_a_leap_year(int yyyy) {
    if (yyyy % 400 == 0) {
        return true;
    }

    if (yyyy % 100 != 0) {
        if (yyyy % 4 == 0) {
            return true;
        }
    }
    return false;
}
