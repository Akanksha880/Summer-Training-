#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ifstream my_file("file.txt");
  //check the file for erros
  if(!my_file){
    cout<<"error :unable to opening thje file"<<endl;
    return 1;
  }
  //stroore the content of file in"line"string
  string line;
  //loop unti; the end of text file
  while(!my_file.eof()){
    //store the current file in "line:"variable
    getline(my_file,line);
    //print the line variable
    cout<<line<<endl;
  }
  //close the file
  my_file.close();
  return 0;
  
}