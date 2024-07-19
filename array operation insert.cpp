#include <iostream>

using namespace std;

const int MAX_SIZE = 10;
int arr[MAX_SIZE];
int s = 0;

void insert(int val) {
    if (s < MAX_SIZE) {
        arr[s] = val;
        s++;
        cout << "Inserted " << val << " success" << endl;
    } 
}

void deleteElement(int val) {
    bool found = false;
    for (int i = 0; i < s; i++) {
        if (arr[i] == val) {
            for (int j = i; j < s- 1; j++) {
                arr[j] = arr[j + 1];
            }
            s--;
            found = true;
            cout << "Deleted " << val << " success" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
}

void update(int oldVal, int newVal) {
    bool found = false;
    for (int i = 0; i < s; i++) {
        if (arr[i] == oldVal) {
            arr[i] = newVal;
            found = true;
            cout << "Updated " << oldVal << " to " << newVal << " success" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
}

void read() {
    cout << "Array elements: ";
    for (int i = 0; i < s; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, val, oldVal, newVal;
    while (true) {
        cout << "Enter your choice:" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Update" << endl;
        cout << "4. Read" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                insert(val);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> val;
                deleteElement(val);
                break;
            case 3:
                cout << "Enter old value: ";
                cin >> oldVal;
                cout << "Enter new value: ";
                cin >> newVal;
                update(oldVal, newVal);
                break;
            case 4:
                read();
                break;
            case 5:
                cout << "Exit program" << endl;
                return 0;
            default:
                cout << "Invalid" << endl;
        }
    }
    return 0;
}