#include <iostream>

using namespace std;

class MyClass {
private:
    int value1;
    int value2;

public:
    // Constructor
    MyClass(int v1, int v2) {
        // Using 'this' pointer to differentiate between member variables and constructor parameters
        this->value1 = v1;
        this->value2 = v2;
    }

    // Getter for value1
    int getValue1() const {
        return this->value1;
    }

    // Getter for value2
    int getValue2() const {
        return this->value2;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj(10, 20);

    // Get the values using the getter functions
    cout << "Value 1: " << obj.getValue1() << endl;
    cout << "Value 2: " << obj.getValue2() << endl;

    return 0;
}
