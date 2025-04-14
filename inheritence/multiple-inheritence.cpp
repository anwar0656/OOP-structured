// which contain single derived class but multiple base classes is called multiple inheritence 
#include<iostream>
using namespace std;
class base1{
    protected:
    int number;
    public:
    base1(){}
    base1(int n){
        number=n;
    }
    void input(){
        cout<<"Enter a number"<<endl;
        cin>>number;
    }
    void output(){
        cout<<"The number is "<<number;
    }

    
};
class base2{
    protected:
    char character;
    public:
    base2(){}
    base2(char c){
        character=c;
    }
    void input1(){
        cout<<"Enter a character"<<endl;
        cin>>character;
    }

    void display1(){
        cout<<"The character is "<<character<<endl;

    }
    
    
};

class derived:public base1, public base2{
    private:
    float f;
    public:
    derived(){}
    derived(float fvar): f(fvar){}
        void input2(){
        cout<<"Enter a float value"<<endl;
        cin>>f;
    }

    void display2(){
        cout<<"The float value is "<<f<<endl;

    }
    

    
};
int main(){
    // base1 b1;
    // b1.input();
    // b1.output();

    // base2 b2;
    // b2.input1();
    // b2.display2();

    derived d;
    d.input();
    d.output();

    d.input1();
    d.display1();

    d.input2();
    d.display2();


    return 0;
}