#include<iostream>
using namespace std;
class parent{
    public:
    void display(){
        cout<<"Display parent "<<endl;
    }
};

class child:public parent{
    public:
    void display(){
        cout<<"Display child"<<endl;
    }
};
int main(){
    parent p;
    p.display(); // parent class function is called 
    child c;
    c.display(); // child class function is called
    // thus this method refers to function overriding
    return 0;
}