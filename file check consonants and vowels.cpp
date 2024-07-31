#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void checkVowelOrConsonant(char ch) {
    string vowels = "aeiouAEIOU";
    if (vowels.find(ch) != string::npos) {
        cout << ch << " is a vowel." << endl;
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << ch << " is a consonant." << endl;
    }
}

int main() {
    ifstream file("class.txt.txt");
    if (!file.is_open()) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        checkVowelOrConsonant(ch);
    }

    file.close();
    return 0;
}