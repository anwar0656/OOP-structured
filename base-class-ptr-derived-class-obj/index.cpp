#include<iostream>
using namespace std;
class base{
    public:
    void fun1(){cout<<"i am fun1"<<endl; }
    void fun2(){cout<<"i am fun2"<<endl; }
    void fun3(){cout<<"i am fun3"<<endl; }
};

class derived:public base{
    public:
    void fun4(){cout<<"I am fun 4"<<endl;}
    void fun5(){cout<<"I am fun 5"<<endl;}
};
int main(){
    base *p;
    p=new derived;
    p->fun1();
    p->fun2();
    p->fun3();
    




    return 0;
}