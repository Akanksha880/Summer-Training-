#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    std::map<std::string, int(*)(int, int)> operations = {
        {"+", [](int a, int b) 
        { return a + b; }},
        {"-", [](int a, int b)
         { return a - b; }},
        {"*", [](int a, int b)
         { return a * b; }},
        {"/", [](int a, int b) 
        { return b!= 0? a / b : 0; }}
    };

    int num1, num2;
   string op;

   cout << "Enter a calculation : ";
    cin >> num1 >> op >> num2;

    if (operations.count(op)) {
        int result = operations[op](num1, num2);
       cout << "Result: " << result << endl;
    } else {
       cout << "Error" <<endl;
    }

    return 0;
}