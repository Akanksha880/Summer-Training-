#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>max;
    //min heap
    priority_queue<int,vector<int>,greater<int>>min1;
    max.push(1);
     max.push(2);
      max.push(3);
       max.push(4);
       cout<<"size"<<max.size()<<endl;
       int n=max.size();
       for(int i=0;i<n;i++){
       cout<<max.top()<<" ";
       max.pop();}

cout<<endl;
min1.push(5);
min1.push(1);
min1.push(0);
min1.push(4);
min1.push(3);
int m=min1.size();
for(int i=0;i<m;i++){
    cout<<min1.top()<<" ";
    min1.pop();}
    cout<<endl;
}


