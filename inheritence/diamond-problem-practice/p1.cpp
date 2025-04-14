#include<iostream>
using namespace std;
class base{
    protected:
    int val;

};

class derived1:virtual public base{
    public:
    derived1(){
        val=1;
    }

    void getvalue(){
        cout<<"The value is "<<val;
    }
};

class derived2:virtual public base{
    public:

    derived2(){
        val=2;
    }

    void getvalue(){
        cout<<"The value is "<<val;
    };

};

class derived3: public derived1,public derived2{
// 2 copies
public:
void getvalue(){
    cout<<"The value of derived 3 is ";
    
}
};
int main(){

    derived3 d3;
    d3.getvalue();

    return 0;
}