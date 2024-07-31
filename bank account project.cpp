#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    string name;
    int balance;
public:
    void setData(string acc, string n, int b) {
     accountNumber = acc;
     name = n;
     balance = b;
    }
 void deposit(int amt) {
        balance += amt;
    }
void withdraw(int amt) {
    if (amt > 0 && balance >= amt) {
      balance -= amt;
     } else {
   cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Acc_no. = " << accountNumber << endl;
        cout << "name= " << name << endl;
        cout << "balance= " << balance << endl;
    }
};

int main() {
    BankAccount ob;
    ob.setData("5556422", "Akanksha", 600000);
    ob.display();
    ob.deposit(7000);
    ob.withdraw(5666);
    ob.display();
    return 0;
}