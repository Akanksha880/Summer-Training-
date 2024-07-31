#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream my_file("file.txt");//i need patb so use  TXT",ios::app);
  //check the file for erros
  if(!my_file){
    cout<<"error :unable to opening thje file"<<endl;
    return 1;
  }

//append mulyiple lines to the file
my_file<<"aku 32"<<endl;
my_file<<"aku 22"<<endl;
my_file<<"aku 12"<<endl;
//close the file
  my_file.close();
  return 0;
  
}