#include<iostream>
using namespace std;
class base{
    protected:
    int number;

    public:
    base(){}
    base(int n){
        number=n;
    }

    void input(){
        cout<<"Enter any number "<<endl;
        cin>>number;

    }

    void print(){
        cout<<"The value of a number is "<<number<<endl;
    }
};

class derived1:public base{
    protected:
    char x;
    public:
    derived1(){}
    derived1(char y){
        x=y;
    }

    void input1(){
        cout<<"Input a number "<<endl;
        cin>>number;
        cout<<"Input a character "<<endl;
        cin>>x;
    }

    void display2(){
        cout<<"The character is "<<x<<" and the number is "<<number<<endl;
    }
};
class derived2:public derived1{
    private:
    float f;
    public:
    derived2(){}
    derived2(float fvar){
        f=fvar;
    }

    void input3(){
        cout<<"Enter a value of number character and float value ";
        cin>>number>>x>>f;
    }

    void output3(){
        cout<<"A  values of number character and float value "<<number<<x<<f;
    }
};

int main(){
    base b1;
    b1.input();
    b1.print();

    derived1 d1;
    d1.input1();
    d1.display2();
    derived2 d2;
    d2.input3();
    d2.output3();

    

    return 0;
}