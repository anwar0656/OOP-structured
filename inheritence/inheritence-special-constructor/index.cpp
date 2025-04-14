#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    base(){
        cout<<"Defaut constructor of base is called"<<endl;
    }

    base(int xy){
        x=xy;
        cout<<"Parameterized constructor of base is called "<<x<<endl;
    }
};
class derived:public base{
    private:
    int a;

    public:

    derived(){
        cout<<"Default of derived is called "<<endl;
    }

    derived(int z){
        a=z;
        cout<<"parameterized of z is called "<<a<<endl;
    }

    // inheritence constructor 

    derived(int xy,int z): base(xy),a(z){
        cout<<"Special constructor is called "<<a;
    }
};
int main(){
derived d;
// default constructor of base is called 
// default of derived is called 

derived(20);
// default constructor of base is called 
// parameterized of z is called 20

derived(20,30);
//parameterized constructor of base is called 20
//special constructor is called 30
    return 0;
}