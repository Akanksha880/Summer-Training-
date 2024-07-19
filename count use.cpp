#include <iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    //stl aray
    array<int,4> a={3,4,7,2};
    int size=a.size();
cout<<size<<endl;
for(int i=0;i<a.size();i++)
{
    cout<<a[i]<<endl;
}
//bool trueorFalse=a.empty();
//a.front();
cout<<"element at index="<<a.at(3)<<endl;
bool trueFalse=a.empty();
cout<<"true or false="<<trueFalse;
bool empty=a.empty();
cout<<"is array empty or not="<<empty<<endl;
cout<<"first element="<<a.front()<<endl;

cout<<"last element="<<a.back()<<endl;
int c=count(a.begin(),a.end(),4);
cout<<"no 0f 4"<<c<<endl;
cout<<"sort array"<<endl;

return 0;
}
