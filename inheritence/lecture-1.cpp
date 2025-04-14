#include<iostream>
using namespace std;
class base{
    public:
    int x;
    void display(){
        cout<<x<<endl;
    }
};

class drived:public base{
    public:
    int y;
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    base b;
    b.x=13;
    b.display(); //13

    drived d;
    d.x=10;
    cin>>d.y;

    d.print();


    return 0;
}