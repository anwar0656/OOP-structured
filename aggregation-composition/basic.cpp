#include<iostream>
using namespace std;
class B{
    private:
    int b;
    public:
    B(int b=0){
        this-> b=b;
    }
    friend ostream& operator<<(ostream &o, B& obj){
        o<<" "<<obj.b;
        return o;
    }
};
class A{
    private:
    int a;
    B objB;
    public:
    A(int aa=0,int B=0):a(aa),objB(B){} 
    void display(){
        cout<<a<<objB<<endl;
    }

};

int main(){
A a(12,13);
a.display();

    return 0;
}