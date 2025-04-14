#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;

    public:
    student(string n, int a){
        name=n;
        age=a;
    }

    student(const student &obj){
        name=obj.name;
        age=obj.age;

    }

    void display(){
        cout<<name<<" "<<age;
    }
};
int main(){
student s1("Muhammad anwar",19);
s1.display();
student s2(s1);
s2.display();
    return 0;
}