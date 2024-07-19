#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
    std::list<std::string> myList;

    // Add four elements to the list
    myList.push_back("Apple");
    myList.push_back("Banana");
    myList.push_back("Cherry");
    myList.push_back("Date");

    // Display the list
    std::cout << "Elements in the list: ";
    for (std::list<std::string>::iterator it = myList.begin(); it!= myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}//try to add 4 elements and display it using vector using c++