#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>prices={2,1,4};

int minsoFar=prices[0];
int ans=0;
for(int i=1;i<prices.size();i++){
    int profit=prices[i]-minsoFar;
    if(profit>ans){
        ans=profit;

    }
    minsoFar=min(prices[i],minsoFar);
}
cout<< ans;

}