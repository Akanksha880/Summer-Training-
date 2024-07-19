#include<iostream>
#include<deque>
using namespace std;
int main(){
    //deue can perform push and pop
    deque<int>d;
    //isertion
    d.push_back(10);
    d.push_front(11);
    for(int i:d)
    cout<<i<<" ";
cout<<endl;
//delete
d.pop_front();
for(int i:d){
    cout<<i<<" ";
}
cout<<"front:"<<d.front()<<endl;
cout<<"back:"<<d.back()<<endl;
cout<<"empty or not:"<<d.empty()<<endl;
cout<<"before erase:"<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase:"<<d.size()<<endl;

}