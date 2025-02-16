#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_back(90);
    l.push_front(82);
    l.push_back(88);
    
    cout << "Elements in the list: ";
    for(int i : l)
        cout << i << " "<<endl;
    

    if(l.empty())
        cout << "List is empty" << endl;
    else {
        int max_element = l.front();
        for(int i : l){
            if(i > max_element)
                max_element = i;
        }

        cout << "Maximum element: " << max_element << endl;
    }

    return 0;
}