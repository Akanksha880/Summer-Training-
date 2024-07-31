#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>s;
    s.push("abha");
      s.push("sabha");
        s.push("mabha");
        cout<<"top element"<<s.front()<<endl;
        cout<<"size pof aueue"<<s.size()<<endl;
        s.pop();
        cout<<"top element after dequeu"<<s.front()<<endl;
        cout<<"size of quwuw"<<s.size()<<endl;
         cout<<"if queue empty or not"<<s.empty()<<endl;
         int n=s.size();
         for(int i=0;i<n;i++){
            cout<<s.front()<<" ";
            s.pop();

         }
         cout<<endl;
}
