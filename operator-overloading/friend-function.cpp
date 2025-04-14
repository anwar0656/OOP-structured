#include<iostream>
using namespace std;
class complex{
    private:
    int real,imaginary;
    public:
    complex(int r=0,int i=0): real(r),imaginary(i){}
   friend complex operator +(complex c1,complex c2){
        complex temp;
        temp.real=c1.real+c2.real;
        temp.imaginary=c1.imaginary+c2.imaginary;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<"i"<<imaginary<<endl;
    }
};
int main(){
complex c1(2,9);
complex c2(9,3);
complex c3;
c3=c1+c2;
c3.display();
    return 0;
}