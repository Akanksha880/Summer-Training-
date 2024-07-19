#include <iostream>
#include <vector>
#include <string>

int main() {
    // Create a vector of strings
    std::vector<std::string> myVector;

    // Add four elements to the vector
    myVector.push_back("Apple");
    myVector.push_back("Banana");
    myVector.push_back("Cherry");
    myVector.push_back("Date");

    // Display the vector
    std::cout << "Elements in the vector: ";
    for (int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}