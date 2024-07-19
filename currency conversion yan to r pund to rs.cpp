#include <iostream>
using namespace std;
const float POUND_TO_RS = 106.0;
const float RS_TO_POUND = 0.0094/ POUND_TO_RS;
const float USD_TO_RS = 82.0;
const float RS_TO_USD = 1 / USD_TO_RS;
const float YUAN_TO_RS = 11.3;
const float RS_TO_YUAN = 1 / YUAN_TO_RS;

float PoundToRs(float pounds) {
    return pounds * POUND_TO_RS;
}

float RsToPound(float rupees) {
    return rupees * RS_TO_POUND;
}

float RsToUsd(float rupees) {
    return rupees * RS_TO_USD;
}


float UsdToRs(float dollars) {
    return dollars * USD_TO_RS;
}

float RsToYuan(float rupees) {
    return rupees * RS_TO_YUAN;
}


float YuanToRs(float yuan) {
    return yuan * YUAN_TO_RS;
}

int main() {
    float amount;
    int choice;

   cout << "Currency Conversion\n";
    cout << "1. Pound to Rupees\n";
    cout << "2. Rupees to Pound\n";
    cout << "3. Rupees to US Dollar\n";
   cout << "4. US Dollar to Rupees\n";
   cout << "5. Rupees to Yuan\n";
    cout << "6. Yuan to Rupees\n";
   cout << "Enter your choice: ";
    cin >> choice;

    std::cout << "Enter the amount: ";
    std::cin >> amount;

    switch (choice) {
        case 1:
          cout << amount << " Pound(s) = " << PoundToRs(amount) << " Rupee(s)\n";
            break;
        case 2:
            cout << amount << " Rupee(s) = " << RsToPound(amount) << " Pound(s)\n";
            break;
        case 3:
            cout << amount << " Rupee(s) = " << RsToUsd(amount) << " US Dollar(s)\n";
            break;
        case 4:
            cout << amount << " US Dollar(s) = " << UsdToRs(amount) << " Rupee(s)\n";
            break;
        case 5:
            cout << amount << " Rupee(s) = " << RsToYuan(amount) << " Yuan\n";
            break;
        case 6:
            cout << amount << " Yuan = " << YuanToRs(amount) << " Rupee(s)\n";
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }

    return 0;
}
