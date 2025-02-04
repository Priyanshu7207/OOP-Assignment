#include <iostream>
using namespace std;

class Counter {
private:
    int count; // Non-static data member
    static int totalObjects; // Static data member

public:
    // Constructor
    Counter() {
        count = 0; // Initialize the non-static count
        totalObjects++; // Increment the static totalObjects count
    }

    // Increment the count of the current object
    void incrementCount() {
        count++;
    }

    // Get the current count of the object
    int getCount() const {
        return count;
    }

    // Get the total number of objects created
    static int getTotalObjects() {
        return totalObjects;
    }
};

// Initialize the static data member outside the class
int Counter::totalObjects = 0;

int main() {
    Counter obj1, obj2, obj3;

    // Increment counts for some objects
    obj1.incrementCount();
    obj1.incrementCount();
    obj2.incrementCount();

    // Print the count of each object
    cout << "Count of obj1: " << obj1.getCount() << endl; // Output: 2
    cout << "Count of obj2: " << obj2.getCount() << endl; // Output: 1
    cout << "Count of obj3: " << obj3.getCount() << endl; // Output: 0

    // Print the total number of objects created
    cout << "Total objects created: " << Counter::getTotalObjects() << endl; // Output: 3

    return 0;
}
