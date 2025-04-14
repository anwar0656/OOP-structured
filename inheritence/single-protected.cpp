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
    private:
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

int main(){
    base b1;
    b1.input();
    b1.print();

    derived1 d1;
    d1.input1();
    d1.display2();

    return 0;
}