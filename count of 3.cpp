#include<iostream>
using namespace std;

int divisibleBy3(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if(n < 0) {
        cout << "Invalid " << endl;
        return 0;
    }

    int arr[20]; 
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 0) {
            cout << "Invalid " << endl;
            return 0;
        }
    }

    int count = divisibleBy3(arr, n);
    cout << "Count of 3 : " << count << endl;

    return 0;
}