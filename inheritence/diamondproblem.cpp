#include<iostream>
using namespace std;
class base{
    protected:
    int val;
    
};

class derived1: virtual public base{
    public:
    
    derived1(){
        val=1;
    }
    void getval(){
    cout<<"The value of derived 1 is "<<val<<endl;
}

    
};

class derived2: virtual public base{
public:
derived2(){
    val=2;
}
void getval(){
    cout<<"The value of derived 2 is "<<val<<endl;
}



};

class derived3:public derived1,public derived2{
    public:
// 2 copies of derived value :) 1 & 2
void getval(){
    cout<<"The value is "<<val<<endl;
}
 
};
int main(){

    derived3 d3;
    d3.getval();

    return 0;
}