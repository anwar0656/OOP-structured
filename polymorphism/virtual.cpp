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
    base p=derived();
    p.fun(); // derived class function will be called if we use virtual with a 
    // function thean the effieceny will be removed and transfer to derived  

    /// output Derived class function

     /* without virtual always base class function will be called
     because over their effiency is of ptr (pointer) but using virtual effiency is transfer to */

    return 0;
}