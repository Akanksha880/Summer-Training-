#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
    vector<int>numbers={1,2,3,4,5};
   /*
   //using std::accumulate with a lambda to sum up the elements
    int sum=accumulate(numbers.begin(),numbers.end(),0,[](int total,int n){
        return total+n;

    });
    cout<<"sum:"<<sum<<endl;//output sum 15
    return 0;*/
    int sum=0;
     //for_each(numbers.begin(),numbers.end(),[&sum](int n){ return sum+=n;});//
    auto total=[](vector<int>&numbers)
    {
        int sum=0;
        for(int i:numbers)
        {
            sum+=i;
        }
        return sum;
    };
    cout<<"sum "<<total(numbers) <<endl;
}