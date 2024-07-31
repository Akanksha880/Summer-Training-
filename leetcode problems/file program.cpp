#include<iostream>
#include<fstream>
using namespace std;
int main(){
  
  //open a text file for writing you can use open() to open file
  //ofstream my_file.open("example.txt");//
  ofstream my_file("example.txt");
  //close the file
 // my_file.close();
  //return 0;

/*ofstream my_file("example.txt");
//check if file has opened prioperly
if (!my_file){
  //print error message
  cout<<"error opening the file"<<endl;
  //terminate the main()function
  return 1;
}
}*/
//2.using th is_open is_function
//this is_open() fundction returns
/*of stream my_file("example.txt");
if(!my_file.is_open()){
  cout<"erreo opening the file"<<endl;
  return 1;
}*/
//3.using the fail() functiom
if(my_file.fail()){
  cout<<"error"<<endl;
  return 1;
}
}