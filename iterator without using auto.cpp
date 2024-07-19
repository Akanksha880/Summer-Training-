#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for(set<int>::iterator i=s.begin(); i!=s.end(); ++i){
        cout<<*i<<endl;
    }

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);

    for(set<int>::iterator i=s.begin(); i!=s.end(); ++i){
        cout<<*i<<endl;
    }

    return 0;
}