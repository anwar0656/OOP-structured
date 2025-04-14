#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    int cnic;
    int age;
    public:
    person(string n=0,int c=0,int a=0): name(n),cnic(c),age(a) {}
    void display(){
        cout<<"name: "<<name<<"\n cnic: "<<cnic<<"\n age: "<<age<<endl;
    }

};

class teacher:virtual public person{
    protected:
    string subject;
    int experience;
    public:
    teacher(string S,int ex): subject(S),experience(ex) {}
    void display(){
        person::display();
        cout<<"Subject: "<<subject<<"\n Experience: "<<experience<<endl;
    }


};

class student: virtual public person{
    protected:
    int roll;
    int slip;
    student(int r,int s):roll(r),slip(s){}
    void display(){
        person::display();
        cout<<"Roll no: "<<roll<<"\n Slip"<<slip<<endl;
    }

};

class ta:public teacher,public student{
    int stipendent;
    public:
    ta(string n=0,int c=0,int a=0,string S="",int ex=0,int r=0,int s=0,int stri=0): person(n,c,a),student(r,s),
    teacher(S,ex), stipendent(stri){}
    void display(){
        person::display();
        cout<<"Roll no: "<<roll<<"\n Slip"<<slip<<endl;
        cout<<"Stripendent "<<stipendent<<endl;
        cout<<"Subject: "<<subject<<"\n Experience: "<<experience<<endl;

    }
};

int main(){
    ta a("muhammad anwar",45402,19,"cal",3,24,12,198);
    a.display();
    return 0;
}