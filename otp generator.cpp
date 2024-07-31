#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char getRandomCharacter() {
    string characters = "abcdefghijklmnop";
    return characters[rand() % characters.length()];
}

char getRandomNumber() {
    return '1' + (rand() % 10);
}

string generateOTP(int length) {
    string otp;
    srand(time(0)); 

    for (int i = 0; i < length; ++i) {
        if (rand() % 2 == 0) {
            otp += getRandomCharacter();
        } else {
            otp += getRandomNumber();
        }
    }

    return otp;
}

int main() {



    
    int otpLength = 8; 
    string otp = generateOTP(otpLength);
    cout << "Generated OTP: " << otp << endl;
    return 0;
}
