#include<iostream>
using namespace std;
class vehicle{
    public:
    void move(){
        cout<<"It will move "<<endl;
    }
};

class bycycle:virtual public vehicle{
    public:
    void move(){
        cout<<"Bycycle will move like drhum drhum "<<endl;
    }
};
class car:virtual public vehicle{
    public:
    void move(){

    }
};

class hybrid:public bycycle,public car{
    public:
    void move(){
        
        
        vehicle::move();
        bycycle::move();
        car::move();

    }
};
int main(){

    hybrid h;
    h.move();

    return 0;
}