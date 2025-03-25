#include "calculator.h"
#include <iostream>
#include <random>
#include <cmath> 
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Cannot divide by zero."<<endl;
        return 0;
    }
    return a / b;
}

double factorial(double n) {
    if (n < 0) {
        cout << "Error: Factorial is only defined for non-negative integers." << endl;
        return 0;
    }
    double result = 1;
    for (int i = 2; i <= static_cast<int>(n); ++i)
        result *= i;
    return result;
}

double gcd(double a, double b) {
    int x = static_cast<int>(abs(a));
    int y = static_cast<int>(abs(b));
    if (x == 0 && y == 0) {
        cout << "Error: GCD of 0 and 0 is undefined"<<endl;
        return 0;
    }
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return static_cast<double>(x);
}

double lcm(double a, double b) {
    if (a == 0 || b == 0) {
        cout << "Error: LCM with zero is zero." << endl;
        return 0;
    }
    return abs(a * b) / gcd(a, b);
}

double generateRandomNumber(double min, double max) {
    if (min > max) {
        cout << "Error: min cannot be greater than max in random number generation." << endl;
        return 0;
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> distr(min, max);
    return distr(gen);
}



