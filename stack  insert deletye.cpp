#include<iostream>
#include<vector>
using namespace std;

vector<int> stack;

int main() {
    int choice;
    while (true) {
        cout << "\n1. Size of the stack" << endl;
        cout << "2. Insert element " << endl;
        cout << "3. Delete element " << endl;
        cout << "4. Top element " << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Size of the stack: " << stack.size() << endl;
        } else if (choice == 2) {
            int value;
            cout << "Enter the value to be inserted: ";
            cin >> value;
            stack.push_back(value);
        } else if (choice == 3) {
            if (stack.empty()) {
                cout << "Stack is underflow." << endl;
            } else {
                cout << "Deleted element: " << stack.back() << endl;
                stack.pop_back();
            }
        } else if (choice == 4) {
            if (stack.empty()) {
                cout << "Stack is underflow." << endl;
            } else {
                cout << "Top element of the stack: " << stack.back() << endl;
            }
        } else if (choice == 5) {
            break;
        }
    }

    return 0;
}