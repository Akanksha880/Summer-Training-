#include <iostream>
#include <array>
#include<algorithm>
using namespace std;
int main() {
     array<int, 5> a = {3, 4, 7, 2, 7};
    int size = a.size();
    cout << "Size of array: " << size << endl;
    int count1 = count(a.begin(), a.end(), 7);
    if (count1 == 2) {
        cout << " 7 appears 2 times ." << endl;
    } else {
        cout << "there is no 7 " << endl;
    }
    cout << "First element:" << a.front() << endl;
    cout << "Last element:" << a.back() << endl;
return 0;
}
