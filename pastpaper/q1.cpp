#include<iostream>
using namespace std;
class mamal{
    public:
    void makesound(){
        cout<<"Mamal dog barks"<<endl;
    }
    
    
};

class bird{
    public:

    void makesound(){
        cout<<"Bird sound chirps"<<endl;

    }
};

class movement{
    public:
    void move(){
        cout<<"Animals walk, mammal walks birds fly"<<endl;
    }
};

class animaltype:public mamal,public bird,public movement{
public:
void makesound(){
    mamal::makesound();
    bird::makesound();
}
};
int main(){

animaltype a;
a.move();
a.makesound();




    return 0;
}