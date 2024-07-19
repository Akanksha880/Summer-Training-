#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:    
        double salary;   //data hiding
    public:
        string name;
        string dept;
        //double salary
        string subject;
        void changeDept(string newDept)
        {
            dept=newDept;
        }
        //getter and setter methods
        void setSalary(double s)
        {
            salary=s;
        }
        double getSalary(){
            return salary;
        }
        Teacher(){
            cout<<"constructor is calling"<<endl;
        }
        Teacher(string s,string d,string sub,double sal){
            name=s;
            dept=d;
            subject=sub;
            salary=sal;
        }
        void getInfo()
        {
            cout<<"Teacher name: "<<name<<endl;
            cout<<"Teacher subject: "<<subject<<endl;
                cout<<"Department name: "<<dept<<endl;
                    cout<<"salary: "<<salary<<endl;
        }
};
int main()
{
    Teacher t1;
    Teacher t2("aku","CSE","Python",120000);
    t1.name="sarang";
    t1.subject="maths";
    t1.changeDept("CSE");
    cout<<t1.name<<endl;
    t1.setSalary(4500);
     t1.getInfo();
t2.getInfo();


}