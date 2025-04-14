#include<iostream>
using namespace std;
class animal{
    public:
    void makesound(){
        cout<<"Animal make sound"<<endl;
    }
};

class dog:public animal{
    public:
    void makesound(){
        cout<<"Dog Bark(bahoo bahoo)"<<endl;
    }
};

class cat:public animal{
    public:
    void makesound(){
        cout<<"cat meow meow"<<endl;
    }
};

int main(){ 
    animal a1;
    a1.makesound(); // animal sound

    dog d1;
    d1.makesound(); // dog bark(bahoo bahoo)

    cat c1;
    c1.makesound(); // meow meow

    return 0;
}