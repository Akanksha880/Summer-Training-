#include <iostream>
using namespace std;
int main() {
    int arr1[] = {22,33,44,55};
    int arr2[] = {23,10,23,45};
    int sum[4];

    for (int i = 0; i < 4; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
cout << "Sum of arrays: ";
    for (int i = 0; i < 4; i++) {
      cout << sum[i] << " ";
    }
    return 0;
}