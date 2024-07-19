#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=20;
    auto add=[=](int a){
        return x+y+a;
        
    };
    cout<<"sum:"<<add(5)<<endl;
    auto addByRef=[&x,&y](int a)
    {
        x=30;//mpdify x
        return x+y+a;
    };
    cout<<"sum by reference:"<<addByRef(5)<<endl;//putput sum by reference:55
    cout<<"after modification:"<<x<<endl;//output x after modification:30;
    return 0;
}