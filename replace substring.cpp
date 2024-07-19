#include <iostream>
#include<string>
using namespace std;
int main(){
   // string str="Hello, World";
   // string from="World";
   // string  to ="C++";
  //  size_t start_pos=str.find(from);
  //  if(start_pos !=std::string::npos){
      //  str.replace(start_pos,from.length(),to);
   // }
   // cout<<"string after replacement:"<<str<<endl;
   // return 0;
//}
//string str="Welcome to MIET";
//str.replace(3,4,"abcd");
//cout<<str<<endl;
//return 0;
//}
//inbuilt functions:
string str="hello,Welcome to miet";
string substring=str.substr(9,8);
cout<<"substring:"<<substring<<endl;
//find
size_t found=str.find("hello");
if(found>str.length()){
   cout<<"not found"<<endl;
}
else{
cout<<"found"<<endl;
}
//replace
cout<<str.replace(0,5,"hi everyone")<<endl;
//insert
cout<<str<<endl;
str.insert(0,"Hello");
cout<<str;
//erase
str.erase(2);
cout<<str;
}

