#include <iostream>
using namespace std;
int main() {
    int classesHeld, classesAttended;
    float attendancePercentage;

  cout << "Enter the number of classes held: ";
   cin >> classesHeld;

   cout << "Enter the number of classes attended: ";
    cin >> classesAttended;

 
    attendancePercentage = (static_cast<float>(classesAttended) / classesHeld) * 100;


    cout << "Percentage of classes attended: " << attendancePercentage << "%" << endl;

    if (attendancePercentage >= 75) {
    cout << "The student is allowed to sit in the exam." << endl;
    } else {
        cout << "The student is not allowed to sit in the exam." << endl;
    }

    return 0;
}
