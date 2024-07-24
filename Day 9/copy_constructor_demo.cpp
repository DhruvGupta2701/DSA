
#include<iostream>
#include<string>
using namespace std;
class Teacher
{
private:
 double salary; //data hiding
public:
  string name;
  string dept;
  //double salary;
  string subject;
  void changeDept(string newDept){
    dept =newDept;
  }
  //getter and setter methods
 void setSalary(double s){
   salary=s;
 }
 double getSalary(){
 return salary;
 }
 /*Teacher(){
   cout<<"constructor is calling"<<endl;
 }*/
 Teacher(string s,string d,string sub,double sal){
 this->name=s;
 this->dept=d;
 this->subject=sub;
 this->salary=sal;
 }
 void getInfo(){
 cout<<"Teacher name : "<<name<<endl;
 cout<<"Teacher subject :"<<subject<<endl;
 cout<<"Teacher dept : "<<dept<<endl;
 cout<<"Teacher salary : " <<salary<<endl;
 }
};
int main(){
  /*Teacher t1;
  t1.name="sarang";
  t1.subject="Math";
  t1.changeDept("CSE");
 cout<<t1.name<<endl;
 t1.setSalary(4500);
 cout<<t1.getSalary();*/
 Teacher t1("sumedh","CSE","C++",150000);
 t1.getInfo();
 Teacher t2(t1);//this is default copy constructor
 t2.getInfo();
}
