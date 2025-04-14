#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    base(){}
    base(int a){
        x=a;
    }
};

class derived:public base{
    protected:
    int number;

    public:

    derived(int n): base(n){
        number=n;
    }

    void display(){
        cout<<x<<number;
    }
};
int main(){
    derived d(10);
    d.display();
    return 0;
}