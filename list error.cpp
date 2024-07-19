#include<iostream>
#include<list>
using namespace std;
int main(){
    int i=10;
    int*j=&i;
    //j=&(i+34);//* can be used with varibale/expression/constant
    cout<<j<<endl;
    //cout<<i<<endl;
    //cout<<*(&i)<<endl;
    //& can be used with variable
}