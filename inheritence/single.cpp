#include<iostream>
using namespace std;
class base{
    private:
    int x;
    public:
    int getx(){
        return x;
    }
    void setx(int z){
        x=z;
    }

    base(){}
    base(int a){}
    void input(){
        cout<<"Input a from base "<<endl;
        cin>>x;
    }

    void output(){
        cout<<x<<endl;
    }
};

class derived:public base{
    private:
    int a;
    public:
    int geta(){
        return a;
    }

    void seta(int b){
        a=b;
    }
    derived(){}

    derived(int c,int d){
        a=c;
        setx(d);
    }

    void input2(){
        cout<<"Input value of a from derived";
        cin>>a;
        cout<<"Input value of x ";
        base::input();
    }
    void display(){
        cout<<"value of a is "<<a;
        cout<<" Value of x is "<<getx();
    }


};
int main(){
    base b1;
    b1.input(); 
    b1.output(); //9

    derived d1;
    d1.input2(); // 3 & 8
    d1.display();



    return 0;
}