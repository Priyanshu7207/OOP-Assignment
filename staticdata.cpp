#include <iostream>

class Counter {
private:
    int count; // Variable to store the count for each object
    static int totalObjects; // Static variable to store the total number of objects created

public:
    // Constructor to initialize count and increment totalObjects
    Counter() : count(0) {
        totalObjects++;
    }

    // Function to increment the count
    void increment() {
        count++;
    }

    // Function to get the current count
    int getCount() const {
        return count;
    }

    // Static function to get the total number of objects created
    static int getTotalObjects() {
        return totalObjects;
    }
};

// Initialize static member variable
int Counter::totalObjects = 0;

int main() 
{
    Counter obj1, obj2, obj3;

    // Increment counts for objects
    obj1.increment();
    obj2.increment();
    obj3.increment();

    // Display counts for each object
    std::cout << "Count of obj1: " << obj1.getCount() << std::endl;
    std::cout << "Count of obj2: " << obj2.getCount() << std::endl;
    std::cout << "Count of obj3: " << obj3.getCount() << std::endl;

    // Display total number of objects created
    std::cout << "Total number of objects created: " << Counter::getTotalObjects() << std::endl;

    return 0;
}
