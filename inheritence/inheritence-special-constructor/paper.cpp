#include<iostream>
using namespace std;
#define endl '\n'
class employee{
    protected:
    string name;
    int e_id;
    int sallary;
    public:
    employee(string n="",int eid=0,int s=0): name(n),
    e_id(eid),sallary(s){}

    void display(){
        cout<<"Name: "<<name<<"\nEmployee ID: "<<e_id<<"\n Sallary: "<<sallary<<endl;

    }
};

class manager: virtual public employee{
    protected:
    int team;
    public:
    manager(string n="",int eid=0,int s=0,int t=0): employee(n,eid,s),team(t){}
    void display(){
        employee::display();
        cout<<"Team size: "<<team<<endl;
    }
};

class developer: virtual public employee{
    protected:
    string p_lang;
    int ex;
    public:
    developer(string n="",int eid=0,int s=0,string p="",int e=0): employee(n,eid,s),p_lang(p),ex(e){}
    void display(){
        employee::display();
        cout<<"Programmming Language: "<<p_lang<<"\n Experience: "<<ex<<endl;
    }
};

class intern: public manager, public developer{
    private:
    int duration;
    public:
    intern(string n="",int eid=0,int s=0,int t=0,string p="",int e=0,int dur=0): employee(n,eid,s), developer(n, eid, s, p, e),
    manager(n, eid, s, t), duration(dur){}
    void display(){
        employee::display();
        cout<<"Programming Language: "<<p_lang<<"\n Experience: "<<ex<<endl;
        cout<<"Team size: "<<team<<endl;
    }
};
int main(){
    manager m("Qasim",1000,10000,5);
    m.display();
    developer d("ALI",1010,9000,"python",2);
    d.display();
    intern in("Anwar",1020,8000,4,"C++",1,6);
    in.display();

    return 0;
}