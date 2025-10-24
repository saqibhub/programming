#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {  // Adds two integers
        return a + b;
    }

    double add(double a, double b) {  // Adds two doubles
        return a + b;
    }

    string add(string a, string b) {  // Concatenates two strings
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of integers: " << calc.add(3, 5) << endl;
    cout << "Sum of doubles: " << calc.add(3.5, 4.2) << endl;
    cout << "Concatenation: " << calc.add("Hello, ", "World!") << endl;

    return 0;
};