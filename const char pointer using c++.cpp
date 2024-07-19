#include<iostream>
using namespace std;
int main(){
    const char*message{"Hello world "};
    cout<<"mesaage "<<message<<endl;//hello world
    //message="b";//compiler erro
    cout<<"message "<<*message<<endl;//h
//allow users to modify the string
char message1[] {"Hello world "};
message1[0]='B';
cout<<"message1 :"<<message1<<endl;//bello world
return 0;
}