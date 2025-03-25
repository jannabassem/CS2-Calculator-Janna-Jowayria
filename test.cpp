#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    cout << "Addition: " << add(5.5, 3.2) << endl;
    cout << "Subtraction: " << subtract(10.1, 7.4) << endl;
    cout << "Multiplication: " << multiply(4.2, 6.3) << endl;
    cout << "Division: " << divide(8.8, 2.2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(12.6, 18.9) << endl;
    cout << "LCM: " << lcm(12.6, 18.9) << endl;
    cout << "Random Number: " << generateRandom(1.5, 10.5) << endl;
    return 0;
}

