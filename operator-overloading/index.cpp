#include<iostream>
using namespace std;
class complex{
    private:
    int real,imaginary;
    public:
    complex(int r=0,int i=0): real(r), imaginary(i){}
    complex operator +(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.imaginary=imaginary+x.imaginary;
        return temp;
    }
    void display(){
        cout<<real<<" "<<imaginary<<"i"<<endl;
    }
};
int main(){
    complex c1(3,5);
    complex c2(2,9);
    complex c3;
    c3=c1+c2;
    c3.display();
    

    return 0;
}