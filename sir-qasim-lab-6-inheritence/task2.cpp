#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int age;
    public:
    person(string p_name="",int a=0):name(p_name),age(a){}
};
class marks{
    protected:
    int mathmarks;
    int sciencemarks;
    public:
    marks(int M_marks=0,int S_marks=0):mathmarks(M_marks),sciencemarks(S_marks){}
};
class student:public person,public marks{
    public:
    student(string p_name="",int a=0,int M_marks=0,int S_marks=0):marks(M_marks,S_marks),person(p_name,a){}
    void display(){
        cout<<name<<" "<<age<<" "<<mathmarks<<" "<<sciencemarks<<endl;
    }
    void avg(){
        int sum=0;
        sum=mathmarks+sciencemarks;
        int result=sum/3;
        cout<<"\n"<<result;
    }
};
int main(){
student s1("Muhammad Anwar",19,100,100);
s1.display();
s1.avg();
    return 0;
}