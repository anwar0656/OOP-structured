#include<iostream>
using namespace std;
class teacher{
    private:
    string m_name;
    int m_tid;
    string m_subject;
    public:
    teacher(string name="",int tid=0,string subjects=""):
    m_name(name),m_tid(tid),m_subject(subjects){}
    void display(){
        cout<<m_name<<" "<<m_tid<<" "<<m_subject<<" ";
    }
};

class department{
    private:
    teacher* m_teacher;
    public:
    department(teacher *teacher): m_teacher(teacher){}
void display(){
    m_teacher->display();
}
};
int main(){
teacher t1("ANWAR",210,"OOP");
department d(&t1); // aggregation idhar ho rahi hai jab hum nai department ka obj banaya hai tab 
d.display();
}