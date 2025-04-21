#include<iostream>
using namespace std;
class base{
    public:
  virtual  void fun(){
        cout<<"Base class function "<<endl;
    }
};

class derived:public base{
    public:
    void fun(){
        cout<<"Display of derived"<<endl;
    }
};
int main(){
    base *p=new derived();
    p->fun();

    return 0;
}