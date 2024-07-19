#include<iostream>
using namespace std;
int main(){
    //Braced initializers
    //Variable may contain random gargabage value .WARNING
    int elephant_count;
    int lion_count{};//Initializes tp zero
    int dog_count{10};//Initializes to 10
    int cat_count{15};//Initializes to 15
    //can use expression as initilaizer
    int domesticated_animals{dog_count + cat_count};
    //int new number{doesn't exist}
    //int narrowing conversion{2.9};//compile error
    cout<<"elephant count:"<<elephant_count<<endl;
    cout<<"lion_count:"<<lion_count<<endl;
     cout<<"dog count:"<<dog_count<<endl;
      cout<<"cat count:"<<cat_count<<endl;
       cout<<"domesticated animal count:"<<domesticated_animals<<endl;
       return 0;
}