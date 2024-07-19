#include<iostream>
using namespace std;
int main(){
    //compile time error
    cout<<"Helo world!"<<var<<endl;
    //run time
    int value=7/0;
    cout<<"value:"<<value<<endl;
    return 0;
}