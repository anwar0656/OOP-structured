#include<iostream>
using namespace std;
class university{
    protected:
    string uniname;
    public:
    university(string u_name=""):uniname(u_name){}

};

class derpartment:public university{
    protected:
    string deptname;
    public:
    derpartment(string d_name="",string u_name=""):university(u_name),deptname(d_name){}
    
};

class staff{
    protected:
    int staffid;
    public:
    staff(int s_id=0):staffid(s_id){}
};

class professor:public staff,public derpartment{
    private:
    string subjectT;
    public:
    professor(string u_name="",string d_name="",int s_id=0,string st=""):derpartment(d_name,u_name),staff(s_id),subjectT(st) {}
    void display(){
        cout<<uniname<<" "<<deptname<<" "<<staffid<<" "<<subjectT<<endl;
    }
};
int main(){
    professor p("Fast","CS",123,"OOP");
    p.display();
    return 0;
};