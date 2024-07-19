#include <iostream>
#include<string>


using namespace std;
int main(){
    string str="Hello World";
    string substr="World";
    size_t found=str.find(substr);
    if(found!= std::string::npos){
        cout<<"substring found at index:"<<found<<endl;
    }
    else{
        cout<<"substring not found:"<<endl;
    }
    return 0;

    }