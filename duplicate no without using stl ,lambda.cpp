#include <iostream>
using namespace std;
void findDuplicates(const char* str) {
    int count[10] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            switch (str[i]) {
                case '0': 
                count[0]++; 
                break;
                case '1': 
                count[1]++; 
                break;
                case '2': 
                count[2]++; 
                break;
                case '3':
                 count[3]++; 
                break;
                case '4': 
                count[4]++; 
                break;
                case '5': 
                count[5]++; 
                break;
                case '6':
                count[6]++; 
                break;
                case '7':
                count[7]++; 
                break;
                case '8': 
                count[8]++;
                 break;
                case '9': count[9]++; 
                break;
            }
        }
    }

for (int i = 0; i < 10; i++) {
        if (count[i] > 1) {
            cout << "Number "<< i<<"occurs "<<count[i] << endl;
        }
    }
}
int main() {
    const char* str = "jhon12Doe14@gmail18.com8";
    findDuplicates(str);
    return 0;
}