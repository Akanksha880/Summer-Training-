#include<iostream>
using namespace std;
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int main()
{
    float num1, num2;
    char op;
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the Operator (+, -, *, /): ";
    cin>>op;
    if(op=='+')
        cout<<"Addition Result = "<<add(num1, num2);
    else if(op=='-')
        cout<<"Subtraction Result = "<<sub(num1, num2);
    else if(op=='*')
        cout<<"Multiplication Result = "<<mul(num1, num2);
    else if(op=='/')
        cout<<"Division Result = "<<div(num1, num2);
    else
        cout<<"Wrong Operator!";
    cout<<endl;
    return 0;
}
float add(float a, float b)
{
    return a+b;
}
float sub(float a, float b)
{
    return a-b;
}
float mul(float a, float b)
{
    return a*b;
}
float div(float a, float b)
{
    return a/b;
}
//function overloading:is a compile time polymorphism where two or more functions can have the same name but different parameters
//overriding:is a runtime polymorphism ans is function that requires a subclass or child class to provide a variety of method implementations 
//polymorphism:ability to exist in many forms 
