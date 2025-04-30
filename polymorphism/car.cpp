#include <iostream>
using namespace std;
class car //pure abstract class 
{
public:
    virtual void start()=0; 
    virtual void stop()=0;

};
class innova : public car
{
public:
    void start()
    {
        cout << "Started innova " << endl;
    }
    void stop()
    {
        cout << "Stopped innova" << endl;
    }
};
class swift : public car
{
public:
    void start()
    {
        cout << "Swift started  " << endl;
    }
    void stop()
    {
        cout << "Stopped swift" << endl;
    }
};
int main()
{
    
    // without virtual
    car *c = new innova();
    c->start(); // started car
    c->stop();  // stopped car

    // with virtual
/*Now their output will be 

strarted innova 
stopped innvoa 

*/

cout<<"\n";
c=new swift();
c->start(); // started swift
c->stop(); // stopped swift 

/* now using pure virtual function to attend polymorphism*/
    return 0;
}




/*NOT 
pointer of an abstract class pointing to an object is allowed. However it is 
not allowd to create a simple object of abstract class*/