#include<iostream>
using namespace std;
int main(){
    int X=10;
    auto modifyX=[X]()mutable{
        X=20;//this modifies local copy of x,not orginal x
        cout<<"inside lamda,x="<<X<<endl;
    };
    modifyX();
    cout<<"outside lambda,x="<<X<<endl;//output:outise lamda,x=10
    return 0;
}