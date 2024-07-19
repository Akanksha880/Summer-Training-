#include <iostream>
#include<array>
#include<vector>
using namespace std;
int main(){
   // vector<int> v;
   // size_t cap=v.capacity();
  //  cout<<cap<<endl;
  //  cout<<"enter elements in the vector";
  //  for(int i=0;i<5;i++)
   // {
    //    int x
    //    cin>>x;
    //    v.push_back(x);
    //    cout<<"capactity"<<v.capacity()<<endl;
  //  }
   // v.insert(v.begin()+1,74);
  //  cout<<"print element"<<endl;
    //for(int i=0;i<v.size();i++)
    //{
      //  cout<<v[i]<<" ";
 //}
 //cout<<endl;
 //v.pop_back();
 //cout<<"print element";
 //for(int i=0;i<v.size();i++)
   // {
    //    cout<<v[i]<<"";
 //}
 //cout<<endl;
 //return 0;
//}

vector<int>v(5,1);
//means size is 5 and all five default is 1
cout<<"print all element"<<endl;
for(int i:v){
    cout<<i<<" ";
}
}
