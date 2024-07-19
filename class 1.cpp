#include<iostream>
#include<string>
using namespace std;
class person{
    char name[20];//data member
int id;
public:
void getDetail(){//member function 
cout<<"detail is as follows";
}
};
int main(){
    person p1; //creating object
  p1.getDetail();
}
