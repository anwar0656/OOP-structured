#include<iostream>
using namespace std;
class B{
    private:
    int b;
    public:
    B(int bb=0):b(bb){}
    void display(){
        cout<<b;
    }
};
class A{
    private:
    int a;
    B *objB;
    public:
    A(int aa=0,int BB=0){
        a=aa;
        objB=new B /* class name should be written instead of obj name*/ (BB);

    }
    void display(){
        objB->display();
        cout<<a;
    }
    ~A(){
        delete objB;
    }

};

int main(){
    A a(12,13);
    a.display();
    
}