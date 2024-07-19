#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void Array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {99, 88, 69};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Unsort array: ";
    Array(arr, n);
    bubbleSort(arr, n);
    cout << "Sort array: ";
    Array(arr, n);
    return 0;
}
