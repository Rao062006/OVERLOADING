#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floats
float add(float a, float b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;               // Calls int add(int, int)
    cout << "Sum of 2.5 and 3.1: " << add(2.5f, 3.1f) << endl;     // Calls float add(float, float)
    cout << "Sum of 1, 2 and 3: " << add(1, 2, 3) << endl;          // Calls int add(int, int, int)

    return 0;
}
