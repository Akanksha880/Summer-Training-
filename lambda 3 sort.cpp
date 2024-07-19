#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>numbers={5,3,1,8,4};
    sort(numbers.begin(),numbers.end(),[](int a,int b){
        return a<b;

    });
    cout<<"sorted numbers:";
    for(int num:numbers)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
    
    }