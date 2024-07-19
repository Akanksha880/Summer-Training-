#include<iostream>
using namespace std;
int main(){
    auto divide=[](int a,int b) ->double
    {
        if(b==0){
            return 0;
        }
        return static_cast<double>(a)/b;

    };
    cout<<"division result:"<<divide(10,2)<<endl;//division result 5
    cout<<"division by zero result:"<<divide(10,0)<<endl;//divion result 0
    return 0;
}
