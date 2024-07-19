#include <iostream>
using namespace std;
int searchArray(int array[], int size, int t) {
  for (int i = 0; i < size; i++) {
    if (array[i] == t) {
      return i; 
    }
  }
}
void bubbleSort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
       
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int d[] = {44,5,67,12,89,45};
  int size = sizeof(d) / sizeof(d[0]);
  int t = 45;
  int result = searchArray(d, size, t);
  if (result != -1) {
    cout << "Element  found at index " << endl;
  } else {
    cout << "Element  not found " << endl;
  }
  bubbleSort(d, size);
  cout << "Sorted array: ";
  printArray(d, size);
return 0;
}