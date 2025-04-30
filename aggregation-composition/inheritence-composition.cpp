#include<iostream>
using namespace std;
class address{
    private:
    string city;
    string state;
    public:
    address(string c="",string s=""): city(c),state(s){}
    void display(){
        cout<<city<<" "<<state;
    }

};

class person{
protected:
string name;
address add;
public:
person(string n="",string c="",string s=""): name(n), add(c,s){}
void display(){
    cout<<name<<" ";
    add.display();
}

};
class student:public person{
    protected:
    double gpa;
    public:
    student(string n="",float g=0,string c="",string s=""):person(n,c,s),gpa(g){}
    void display(){
     
     person::display();  
     cout<<" "<<gpa<<" "; 
    }
};
int main(){
student s("muhammad anwar",4.0,"hyd","Sindh");
s.display();
    return 0;
}