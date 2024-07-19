#include<iostream>
using namespace std;
int main(){
    //Assignment notation
    int apple_count(5);//functional variable
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    //int bad_intialization(doesn't_exist3 + doesn't_exist4);
    //Information lost.less safe than braced initializers
    int narrowing_conversion_functional(2.9);//
    cout<<"apple count:"<<apple_count<<endl;
    cout<<"orange count:"<<orange_count<<endl;
    cout<<"fruit count:"<<fruit_count<<endl;
    cout<<"narrowing conversion:"<<narrowing_conversion_functional<<endl;//will loose info
    return 0;
}
