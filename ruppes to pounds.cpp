//user input take value from user to rs into pounds in c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    const float poundsToRupees=100; 

    float amount;
    cout << "Enter amount in pounds: ";
    cin >> amount;

    float rupees = amount * poundsToRupees;
    cout << "amount in rupees : " << rupees << endl;
    return 0;
}
