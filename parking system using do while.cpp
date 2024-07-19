#include <iostream>
using namespace std;

int main() {
    int cars = 0, bikes = 0, rickshaws = 0;
    int choice;
    char repeat;

    do {
        cout << "Parking System"<<endl;;
        cout << "1.Park Car"<<endl;
        cout << "2.Park Bike"<<endl;
        cout << "3.Park Rickshaw"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cars++;
                cout << "Car parked ";
                break;
            case 2:
                bikes++;
                cout << "Bike parked ";
                break;
            case 3:
                rickshaws++;
                cout << "Rickshaw parked ";
                break;
            default:
                cout << "Invalid choice. \n";
                break;
        }
      cout << "another operation? (y/n): ";
      cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    cout << "Cars: " << cars << endl;
    cout << "Bikes: " << bikes << endl;
    cout << "Rickshaws: " << rickshaws << endl;

    return 0;
}
