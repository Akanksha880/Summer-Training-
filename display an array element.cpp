#include <iostream>
using namespace std;
int main() {
    int arr[5] = {22, 52, 63, 444, 85}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "<<endl; 
    }
    return 0;
}